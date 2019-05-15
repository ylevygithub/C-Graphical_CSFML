##
## EPITECH PROJECT, 2018
## Axel CONCEICAO
## File description:
## bistro-matic
##

RM	=	rm -f

SRC	=	./src/main.c \
		./src/sprites.c \
		./src/set_sprites.c \
		./src/struct.c \
		./src/render.c \
		./src/destroy_and_free.c \
		./src/bird.c \
		./src/check_for_event.c

CFLAGS	+=	-Wextra	-Wall -Werror

CFLAGS	+=	-I./include

LDFLAGS	=	-lcsfml-system		\
	-lcsfml-window		\
	-lcsfml-graphics	\
	-lcsfml-audio		\

OBJ	=	$(SRC:.c=.o)

NAME_LIB	=	libmy.a

NAME	=	my_hunter

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) $(LDFLAGS)

all	:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all
