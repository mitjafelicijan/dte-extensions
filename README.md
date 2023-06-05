# DTE extensions

Assortment of extensions for [dte code editor](https://craigbarnes.gitlab.io/dte/).

These extensions are **work in progress** so use at your own risk!

This utilities can also be used without editor and as a CLI tool. You
can pass in parts of the code like `cat file.c | ./comment`.

You can check keybindings for the editor with `dte -K` and start
pressing keys to see what the combination for rc file is.

## How to Compile and Install

- You need to have at least version 1.11 or above of dte installed.
- Compile with `make` or `make all`.
- Copy binaries to ~/.dte/bin with `make install`.

*Code should compile with gcc, clang and tcc.*

## Extensions

### Comments

Comments and uncomments a line or a selection. Currenly only works with
`//` style of comments.

RC file configuration (~/.dte/rc)

- `alias comment 'exec -s -i line -o buffer -e errmsg ~/.dte/bin/comment';`
- `bind C-_ comment;` (C-_ on my keyboard layout means Ctrl+forwardslash)

### Formatting

Formats current buffer based on file extention.

Currently supports:

- Clang with `clang-format`
- Golang with `go fmt`

RC file configuration (~/.dte/rc)

- `alias format='save -f; exec -s -e errmsg ~/.dte/bin/format $FILE; reload';`
- `bind M-f format;`
