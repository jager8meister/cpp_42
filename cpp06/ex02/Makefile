.PHONY:	all re clean fclean
NAME	= 	realIdentify
SRC		=	$(wildcard *.cpp)
HDRS	=	$(wildcard *.hpp)
TRASH	=	$(wildcard *.dSYM)
OBJ = $(SRC:.cpp=.o)
CC	= clang++ -Wall -Wextra -Werror -std=c++98  -g $(addprefix -I , $(HDRS))

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME):	$(OBJ) $(HDRS)
			$(CC)  $(SRC) -o $(NAME)
all:		$(NAME)
clean:
			rm -rf $(OBJ)
			rm -rf $(TRASH)
fclean:		clean
			rm -rf $(NAME)	
re:			fclean all