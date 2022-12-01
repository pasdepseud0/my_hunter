##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Compile generator
##

SRC		=		\
			src/my_main.c			\
			src/game_view.c			\
			src/init.c				\
			src/ani_bird.c			\
			# src/create_object.c		\
			# src/evt_close_win.c

NAME 	=	my_hunter

OBJ 	=	$(SRC:.c=.o)

CFLAGS 	= -Wall -Wextra -I include

LIB		= -L lib/my -lmy

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: 	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc $(OBJ) -o $(NAME) $(LIB) $(CSFML)

clean:
	make clean -C lib/my/
	find . \( -name "#*#" -o -name "*~" -o -name "$(OBJ)" \) -delete

fclean:	clean
	make fclean -C lib/my
	find . \( -name  "vgcore.*" -o -name "*.log" -o -name "*.a" \) -delete
	find . \( -name "*.o" -o -name "$(NAME)" \) -delete

unit_test: fclean
		make unit_test -C tests/

run_test: unit_test
	tests/./unit_test

debug: CFLAGS += -g

debug: 	re

re:	fclean all
