NAME = libft.a
CC = cc
CFLAG = -Wall -Wextra -Werror
SRC = ft_*.c
OBJ = $(SRC:%.c=%.o)

.PHONY:all
all:$(NAME)

$(NAME):$(OBJ)
	ar -csr  $@ $^

$(OBJ):$(SRC)
	$(CC) $(CFLAG) -c $< -o $@

.PHONY:clean
clean:
	rm -f $(OBJ)

.PHONY:fclean
fclean:
	rm -f $(NAME)

.PHONY:re
re:fclean all
