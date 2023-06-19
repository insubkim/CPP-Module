NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = PhoneBook.cpp \
	Contact.cpp \
	main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.phony: all clean fclean re