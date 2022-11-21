##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compile libmy
##

SRC =	\
		my_compute_factorial_rec.c	\
		my_compute_factorial_it.c	\
		my_str_to_word_array.c		\
		my_print_revalpha.c			\
		my_print_digits.c			\
		my_evil_str.c				\
		mini_printf.c				\
		my_strncat.c				\
		my_strncpy.c				\
		my_strncmp.c				\
		my_put_nbr.c				\
		my_putchar.c				\
		my_strcpy.c					\
		my_strcmp.c					\
		my_strcat.c					\
		my_strdup.c					\
		my_revstr.c					\
		my_putstr.c					\
		my_strlen.c					\
		my_isneg.c					\
		my_swap.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CFLAGS = -Wall -Wextra -I ../../include

all: $(NAME)

$(NAME): $(OBJ)
	cp my.h ../../include/
	ar rc $(NAME) $(OBJ)

clean:
	find . \( -name "#*#" -o -name "*~" -o -name "$(OBJ)" \) -delete
	find . \( -name "*.o" \) -delete

fclean: clean
	find . \( -name "$(NAME)" \) -delete

# unit_test: fclean
# 		gcc -o unit_test $(SRC) -L . -l my -lcriterion --coverage

# run_test: unit_test
# 	./unit_test

debug: CFLAGS += -g

debug: re

re: fclean all
