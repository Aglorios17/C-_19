# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglorios <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 13:56:41 by aglorios          #+#    #+#              #
#    Updated: 2021/04/26 14:10:36 by aglorios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

NAME = convert

SRC =  convert.cpp \
	   Scalaire.cpp

HEADER = ./

all: $(NAME)

$(OBJS): $(SRC)
	$(GCC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test clean fclean re
