// Part of dte editor extensions project.
// Toggles comments in code. Currently only supports languages
// that use // as comments.

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
