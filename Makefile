# Variables
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
LIBFT = libft/libft.a
SRC_DIR = src
OBJ_DIR = obj
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Rules
all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[1;32mCompiled $(NAME) successfully!\033[0m"

$(LIBFT):
	@make -C libft
	@echo "\033[1;32mLibft compiled successfully!\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C libft clean
	@echo "\033[1;31mObject files removed!\033[0m"

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@echo "\033[1;31mExecutable and libft removed!\033[0m"

re: fclean all

# Phony targets
.PHONY: all clean fclean re
