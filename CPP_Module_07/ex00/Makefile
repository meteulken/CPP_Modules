NAME = whatever

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
