# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: savram <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/22 17:53:57 by savram            #+#    #+#              #
#    Updated: 2016/01/22 17:54:36 by savram           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fillit

SRC = main.c ft_add.c ft_back_co.c ft_check_add.c ft_check_buf.c ft_check_tet.c\
	  ft_clone.c ft_get_tet.c ft_initial.c ft_is_taken.c ft_load_tet.c\
	  ft_max.c ft_min.c ft_number.c ft_print.c ft_write.c ft_optim.c\
	  ft_move_up.c ft_move_left.c

OBJECT_FILES = $(subst .c,.o,$(SRC))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): objects
	@gcc -o $(NAME) $(OBJECT_FILES)

objects:
	@gcc $(FLAGS) -c $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

norme:
	@notminette $(SRC) fillit.h

re: fclean all
