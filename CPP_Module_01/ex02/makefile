BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
NC =	\033[0m

#name
NAME =		brainz

#compilation
CC =		c++
CFLAGS = 	-Wall -Wextra -Werror -std=c++98

#source files
SRC = 		main.cpp

all: $(NAME)

$(NAME): 
	@echo "$(BOLD)$(GREEN)[ Compiling ... ]$(NC)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(BOLD)$(GREEN)[ 🪄 Program ready! ]$(NC)"
	@./brainz

clean:
	@echo "$(BOLD)$(RED)[ 🔥 Removing program ]$(NC)"
	@rm -f $(NAME)

fclean:
	@echo "$(BOLD)$(RED)[ 🔥 Removing program ]$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean