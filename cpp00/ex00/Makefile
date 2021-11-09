.PHONY:	all re clean fclean
NAME	= 	megaphone
SRC		=	$(wildcard *.cpp)
CC			= clang++ -Wall -Wextra -Werror -std=c++98
$(NAME):
			$(CC) $(SRC) -o $(NAME)
all:		$(NAME)
clean:
			rm -rf ${NAME}
fclean:		clean
re:			fclean all