CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
AR = ar rcs
RM = rm -f

SRC = 
OBJ = $(SRC:%.c=%.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all clean re
.PHONY: clean fclean re all