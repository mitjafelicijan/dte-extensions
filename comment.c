// Toggles comments in code. Currently only supports languages
// that use // as comments.
// Part of dte editor extensions project.

// How to use?
// - You need to have at least version 0.11 of dte installed.
// - Compile with `make comment`
// - Copy `comment` binary to `~/.dte/rc/bin`.
// - Then add alias to your rc file (~/.dte/rc)
//   alias comment 'exec -s -i line -o buffer -e errmsg ~/.dte/bin/comment'
// - Now you can use by envoking M-x and executing `comment` command.
// - You can also bind it to key in you `~/.dte/rc` file. I have it set to 
//   alt and forward slash key which in my case looks like `bind C-_ comment;`

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
  char line[MAX_LINE_LENGTH];
  while (fgets(line, MAX_LINE_LENGTH, stdin)) {
    if (strncmp(line, "//", 2) == 0) {
      printf("%s", line + 2);
    } else {
      printf("//%s", line);
    }
  }

  return 0;
}
