##
## EPITECH PROJECT, 2017
## File description:
## Makefile
##

SRCC = ./src/

SRC	=	$(SRCC)eraser.c		\
		$(SRCC)animation.c	\
		$(SRCC)init.c		\
		$(SRCC)score.c		\
		$(SRCC)init_paralax.c	\
		$(SRCC)init_sprite.c	\
		$(SRCC)move_paralax.c	\
		$(SRCC)primer_initialisation.c	\
		$(SRCC)parser.c	\
		$(SRCC)jump.c	\
		$(SRCC)main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm -Llib/my/ -lmy -lc_graph_prog

NAME	=	my_runner

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
