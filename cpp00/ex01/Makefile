.PHONY:	all re clean fclean
NAME	= 	phonebook
SRC		=	$(wildcard *.cpp)
CC			= clang++ -Wall -Wextra -Werror -std=c++98 -I ./phonebook.hpp
$(NAME):
			$(CC) $(SRC) -o $(NAME)
all:		$(NAME)
clean:
			rm -rf ${NAME}
fclean:		clean
re:			fclean all