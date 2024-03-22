NAME = btc

SRC = main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all