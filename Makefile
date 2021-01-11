HEADER = get_next_line.h

all: $(HEADER)
	@gcc main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=10
	@./a.out
	@rm a.out