NAME = megaphone

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Megaphone.hpp

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.phony: all clean fclean re