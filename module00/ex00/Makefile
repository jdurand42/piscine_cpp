NAME	=	megaphone

SRCS	=	megaphone.cpp

LIBS	=

CC	=	clang++

OBJS	=	$(SRCS:.cpp)

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

all	:	$(NAME)
		make wall

NAME	:

c	:
		$(CC) -o $(NAME) $(SRCS)

wall	:
		$(CC) -o $(NAME) $(FLAGS) $(SRCS)

clean	:

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY: all clean fclean re
