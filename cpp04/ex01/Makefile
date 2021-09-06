NAME = ex01

SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			Brain.cpp

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
