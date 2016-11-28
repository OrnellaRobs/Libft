# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 11:58:30 by orazafin          #+#    #+#              #
#    Updated: 2016/11/21 14:59:35 by orazafin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	Makefile

FLAGS += -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_strdup.c ft_strncpy.c ft_strstr.c ft_strcmp.c

OBJ = $(SRCS:.c=.o)

GCC = gcc $(FLAGS)

all : $(NAME)

$(NAME):
	@$(GCC) -c $(SRCS)
	ar rc $(NAME).a $(OBJ)
	ranlib	$(NAME).a

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME).a

re:
	fclean all
