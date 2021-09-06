NAME = ex03

SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

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
