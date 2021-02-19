SRC	=	src/my_strlen.c					\
		src/my_putstr.c					\
		src/my_ops.c					\
		src/my_error_print.c			\

TESTS	=	tests/test_strlen.c			\
			tests/test_putstr.c			\
			tests/test_ops.c			\
			tests/test_error_print.c	\

CC	=	gcc

NAME	=	unit_tests

CFLAGS	=	-Wall -Wextra -I./

all:	tests_run

tests_run:	clean
	$(CC) $(SRC) -c --coverage $(CFLAGS)
	$(CC) $(TESTS) -c $(CFLAGS)
	$(CC) -o $(NAME) *.o -lcriterion -lgcov
	./$(NAME)

clean:
	$(RM) *.gc* *.o
	$(RM) $(NAME)

.PHONY:	tests_run clean all