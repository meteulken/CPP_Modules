name = span

SRC = Span.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(name)

$(name): $(OBJ)
	c++ $(FLAG) $(OBJ) -o $(name)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(name)

re: fclean all

.PHONY: all clean fclean re
