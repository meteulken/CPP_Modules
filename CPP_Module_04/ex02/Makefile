name = Animal

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

src = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

all: $(name)

$(name): $(src)
	$(CC) $(FLAGS) $(src) -o $(name)

clean:

fclean: clean
	rm -f $(name)

re: fclean all

.PHONY: all clean fclean re