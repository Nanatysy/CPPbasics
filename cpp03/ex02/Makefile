NAME = ex03

SRCS =	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =	ClapTrap.hpp \
			FragTrap.hpp

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = clang++

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all