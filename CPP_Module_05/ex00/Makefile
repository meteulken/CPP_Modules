name = Bureaucrat

SRC = Bureaucrat.cpp main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(name)

$(name): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(name)

clean:	
	rm -f $(name)

re: clean all

.PHONY: all clean re