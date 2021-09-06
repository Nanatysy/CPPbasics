NAME = ex01

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =	Bureaucrat.hpp \
			Form.hpp

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