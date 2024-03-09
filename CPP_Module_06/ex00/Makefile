NAME = convert

SRCS = main.cpp ScalarConversion.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp

clean:
	rm -f $(OBJS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re