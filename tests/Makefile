##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile unit tests
##

SRC_DIR=	../src/

SRC= 	$(SRC_DIR)/flag_1.c					\
		$(SRC_DIR)/flag_2.c 				\
		$(SRC_DIR)/flag_3.c					\
		$(SRC_DIR)/my_getnbr.c				\
		$(SRC_DIR)/my_printf.c				\
		$(SRC_DIR)/my_putchar.c				\
		$(SRC_DIR)/my_putchar_error.c		\
		$(SRC_DIR)/my_put_nbr_base.c		\
		$(SRC_DIR)/my_put_pointer.c			\
		$(SRC_DIR)/my_put_spe_str.c			\
		$(SRC_DIR)/my_putstr.c				\
		$(SRC_DIR)/my_put_unsigned_int.c	\
		$(SRC_DIR)/my_strlen.c				\
		$(SRC_DIR)/rb_print_err.c


SRC_UT_DIR=	./

SRC_UT= $(SRC_UT_DIR)/tests.c

OBJ=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS=	-Wall -Wextra --coverage

LDFLAGS=	-lcriterion -lgcov

NAME=	units

all: $(NAME)

$(NAME): $(OBJ)

	cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
