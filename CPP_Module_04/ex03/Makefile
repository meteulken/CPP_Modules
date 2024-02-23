name = AMateria

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

src = AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp main.cpp

all: $(name)

$(name): $(src)
	$(CC) $(FLAGS) $(src) -o $(name)

clean:

fclean: clean
	rm -f $(name)

re: fclean all

.PHONY: all clean fclean re