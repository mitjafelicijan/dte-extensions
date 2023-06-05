all: comment format

comment: comment.c
	$(CC) comment.c -o comment

format: format.c
	$(CC) format.c -o format

install:
	mkdir -p ~/.dte/bin
	mv comment ~/.dte/bin/
	mv format ~/.dte/bin/

 clean:
	-rm comment
	-rm format
