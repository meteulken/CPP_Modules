NAME = RPN

SRC = RPN.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all