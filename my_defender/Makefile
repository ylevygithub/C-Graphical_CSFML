##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	./menu/menu.c \
		./menu/print_menu.c \
		./menu/text_menu.c \
		./menu/music.c \
		./canon/canon_rect.c \
		./canon/main.c \
		./canon/set_canon.c \
		./ennemies_management/move_ennemies.c \
		./ennemies_management/move_ennemies1.c

LDFLAGS	=	-lcsfml-system -lcsfml-audio -lcsfml-window -lcsfml-graphics

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
