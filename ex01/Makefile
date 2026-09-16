NAME = scavtrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
RESET = \033[0m

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "$(GREEN)ClapTrap compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)Object files removed.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re