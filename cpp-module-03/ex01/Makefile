NAME = ScapTrap

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ClapTrap.cpp ScapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = ClapTrap.hpp ScapTrap.hpp

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make

.phony: all clean fclean re