# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takenakatakeshiichirouta <takenakatakes    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 03:13:30 by takenakatak       #+#    #+#              #
#    Updated: 2025/04/27 11:10:59 by takenakatak      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:%.c=%.o)

.PHONY:all
all:$(NAME)

$(NAME): $(OBJ)
	@echo "DEBUG: --- Archive Rule ---"
	@echo "DEBUG: SRC = $(SRC)" # DEBUG: Show the value of SRC
	@echo "DEBUG: OBJ = $(OBJ)" # DEBUG: Show the value of OBJ
	@echo "DEBUG: Prerequisites ($^): $^" # DEBUG: Show actual prerequisites passed to ar
	@echo "DEBUG: Building archive $(NAME) from $(OBJ)" # DEBUG: Confirm ar command inputs
	ar -csr $@ $^
	@echo "DEBUG: Archive rule finished."

%.o: %.c
	@echo "DEBUG: --- Compile Rule ---"
	@echo "DEBUG: Target ($@): $@" # DEBUG: Show the target .o file
	@echo "DEBUG: Source ($<): $<" # DEBUG: Show the source .c file
	$(CC) $(CFLAGS) -c $< -o $@ # CFLAGS 変数を使用
	@echo "DEBUG: Compile rule finished for $@"

clean:
	@echo "DEBUG: --- Clean Rule ---"
	@echo "DEBUG: Cleaning object files: $(OBJ)" # DEBUG: Show files being cleaned
	rm -f $(OBJ)
	@echo "DEBUG: Clean rule finished."

fclean: clean
	@echo "DEBUG: --- Fclean Rule ---"
	@echo "DEBUG: Cleaning library file: $(NAME)" # DEBUG: Show file being cleaned
	rm -f $(NAME)
	@echo "DEBUG: Fclean rule finished."

.PHONY:re
re:fclean all
