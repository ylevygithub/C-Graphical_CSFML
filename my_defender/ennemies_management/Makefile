##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile csfml
##

SRC	=	ennemies.c\
		mainl.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lcsfml-graphics -lcsfml-system $(OBJ) -o $(NAME) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
