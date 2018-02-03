# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aorji <aorji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:44:07 by aorji             #+#    #+#              #
#    Updated: 2017/12/02 15:58:32 by aorji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Wextra -Werror
LIB = libft.a
SRC = fillit.c ft_validation.c ft_make_map.c ft_coordinates.c ft_done.c
OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	@ cd ./libft && make && mv $(LIB) ..
	@ gcc $(OBJ) $(LIB) $(FLAGS) -o $(NAME)
%.o: %.c
	@ gcc $(FLAGS) -c $<
clean:
	@ /bin/rm -rf $(OBJ)
	@ cd ./libft && make clean
fclean: clean
	@ /bin/rm -f $(NAME)
	@ /bin/rm -f $(LIB)
	@ /bin/rm -f libft/$(LIB)
re: fclean all