NAME	= megaphone

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

RM		= rm -rf
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
#C++98 standartlarına uygun olarak derleme yapılmasını sağlar.

$(NAME)	:
		$(CC) $(FLAGS) -c $(SRC)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all