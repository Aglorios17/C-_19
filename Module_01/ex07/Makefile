GCC = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

NAME = replace

SRC = replace.cpp

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
