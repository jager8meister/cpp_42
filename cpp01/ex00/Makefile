.PHONY:	all re clean fclean
NAME	= 	zombie
SRC		=	$(wildcard *.cpp)
HDRS	=	$(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
CC	= clang++ -Wall -Wextra -Werror -std=c++98 $(addprefix -I , $(HDRS))

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME):	$(OBJ) Makefile $(HDRS)
			$(CC)  $(SRC) -o $(NAME)
all:		$(NAME)
clean:
			rm -rf $(OBJ)
fclean:		clean
			rm -rf $(NAME)	
re:			fclean all