NAME = phonebook

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = clang++

SRCS =	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

HEADERS =	Contact.hpp \
			PhoneBook.hpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all