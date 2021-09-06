NAME = save_the_day

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = clang++

SRCS =	Account.cpp \
		tests.cpp

HEADERS =	Account.hpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all