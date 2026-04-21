.PHONY: all clean fclean re

NAME = ex02

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC += main.cpp 
SRC += ClapTrap.cpp
SRC += ScavTrap.cpp
SRC += FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *.gch
fclean: clean
	rm -f $(NAME)

re: fclean all

