NAME = ex00

SRCS =	main.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =	Animal.hpp \
			WrongAnimal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongCat.hpp

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
