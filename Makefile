all: comment

comment: comment.c
	$(CC) comment.c -o comment

clean:
	-rm comment
