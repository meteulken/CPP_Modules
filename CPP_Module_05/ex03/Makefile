name = Bureaucrat

SRC = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(name)

$(name): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(name)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(name)

re: clean all

.PHONY: all clean re