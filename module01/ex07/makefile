
NAME		=	replace

SRCS	=	./sed.cpp

CC		=	clang++

SANI	=	-fsanitize=address -g3

CPPFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

RM		= rm -rf

SAFETY	=	-std=c++98

all	:	$(NAME)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(SAFETY) $(CFLAGS) $(OBJS)

c1	:
		clean
		$(CC) -o $(NAME) $(OBJS) $(SRCS)

s1	:
		clean
		$(CC) -o $(NAME) $(SANI) $(SRCS)

w1	:
		clean
		$(CC) -o $(NAME) $(CFLAGS) $(SRCS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	clean fclean all c1 s1 w1
