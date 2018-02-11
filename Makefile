##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Making files
##

SRC	=	src/my_putchar_error.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/rb_print_err.c	\
		src/flag_1.c	\
		src/flag_2.c	\
		src/flag_3.c	\
		src/my_getnbr.c	\
		src/my_printf.c	\
		src/my_put_nbr_base.c	\
		src/my_put_pointer.c	\
		src/my_put_spe_str.c	\
		src/my_putstr.c	\
		src/my_put_unsigned_int.c	\
		src/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
