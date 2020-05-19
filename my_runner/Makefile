##
## EPITECH PROJECT, 2017
## Axel CONCEICAO
## File description:
## bistro-matic
##
CC	=	gcc

RM	=	rm -f

SRC	=	./src/main.c \
		./src/parallax.c \
		./src/draw.c \
		./src/destroy.c \
		./src/struct.c \
		./src/event.c \
		./src/map.c \
		./src/error.c \
		./src/block.c \
		./src/gravity.c \
		./src/trap1.c \
		./src/trap2.c \
		./src/life.c \
		./src/score.c \
		./src/music.c \

CFLAGS	+=	-Wextra	-Wall -Werror

CFLAGS	+=	-I./include

LDFLAGS	=	-lcsfml-system -lcsfml-audio -lcsfml-window -lcsfml-graphics

OBJ	=	$(SRC:.c=.o)

NAME_LIB	=	libmy.a

NAME	=	my_runner

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY:	all clean fclean re
