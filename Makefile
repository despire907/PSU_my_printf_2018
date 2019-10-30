##
## EPITECH PROJECT, 2018
## task01
## File description:
## task01
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c \
		lib/my/my_put_nbr_base.c   \
		lib/my/my_put_nbr_base_long.c  \
		lib/my/my_put_nbr_base_unsigned.c  \
		lib/my/my_put_str_printable_only.c \
		lib/my/my_flag1.c  \
		lib/my/my_flag2.c  \
		lib/my/my_printf.c

TEST_EXEC_NAME =    test_my_printf

C_FLAGS = -fno-builtin -W -Wall -lm

TEST_SRCS =	Test/test_flag_c.c   \
		Test/test_flag_i.c   \
		Test/test_flag_d.c   \
		Test/test_flag_s.c   \
		Test/test_flag_x.c   \
		Test/test_flag_xu.c	\
		Test/test_simple_string.c	\
		Test/test_flag_u.c	\
		Test/test_flag_pours.c	\
		Test/test_flag_b.c	\
		Test/test_flag_o.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

tests_run:  re
	gcc -o $(TEST_EXEC_NAME) $(TEST_SRCS) $(NAME) --coverage -lcriterion

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) *.gcno *.gcda

fclean: clean
	rm -f $(NAME) $(TEST_EXEC_NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
