NAME = ex03

SRCS =	AMateria.cpp \
		Ice.cpp \
		Cure.cpp\
		Character.cpp \
		MateriaSource.cpp \
		main.cpp

OBJS = $(SRCS:%.cpp=%.o)

HEADERS =	AMateria.hpp \
			Ice.hpp \
			Cure.hpp \
			Character.hpp \
			ICharacter.hpp \
			MateriaSource.hpp \
			IMateriaSource.hpp

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
