// Part of dte editor extensions project.
// Formats the code with formatters like clang, go fmt.
// Will add new in the future.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Filename not provided. Exiting...\n");
    exit(1);
  }

  char *filename;
  filename = argv[1];

  char *dot = strrchr(filename, '.');
  if (dot != NULL) {
    char *extension = dot + 1;
    int length = strcspn(extension, "\n");
    extension[length] = '\0';

    // clang formatter for c files.
    if (strcmp(extension, "c") == 0) {
      char *command = malloc(strlen(filename) + 16);
      sprintf(command, "clang-format -i %s", filename);
      system(command);
      free(command);
    }

    // go fmt formatter for go files.
    if (strcmp(extension, "go") == 0) {
      char *command = malloc(strlen(filename) + 7);
      sprintf(command, "go fmt %s", filename);
      system(command);
      free(command);
    }

    // prettier formatter for html, js, css, json files.
    if (strcmp(extension, "html") == 0 || strcmp(extension, "js") == 0 ||
        strcmp(extension, "css") == 0 || strcmp(extension, "json") == 0) {
      char *command = malloc(strlen(filename) + 17);
      sprintf(command, "prettier --write %s", filename);
      system(command);
      free(command);
    }
  }

  return 0;
}
