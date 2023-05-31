# DTE extensions

Assortment of extensions for [dte code editor](https://craigbarnes.gitlab.io/dte/).

These extensions are **work in progress** so use at your own risk!

This utilities can also be used without editor and as a CLI tool. You
can pass in parts of the code like `cat file.c | ./comment`.

## How to use

- You need to have at least version 1.11 or above of dte installed.
- Compile with `make` or `make all`.
- Copy binaries to `~/.dte/bin`.
- Example for comment (but same can be done with others):
	- Then add aliases to your rc file (~/.dte/rc)
  	  `alias comment 'exec -s -i line -o buffer -e errmsg ~/.dte/bin/comment'`
	- Now you can use by envoking M-x and executing `comment` command.
	- You can also bind it to key in you `~/.dte/rc` file. I have it set to 
  	  alt and forward slash key which in my case looks like `bind C-_ comment;`
    - To check for combination keys you can do `dte -K`.
