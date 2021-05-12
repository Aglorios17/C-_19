# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglorios <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 13:56:41 by aglorios          #+#    #+#              #
#    Updated: 2021/04/28 15:47:51 by aglorios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = identify

SRCS     = main.cpp A.cpp B.cpp C.cpp 
OBJS     = $(SRCS:.cpp=.o)

CC      = clang++
CCFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
