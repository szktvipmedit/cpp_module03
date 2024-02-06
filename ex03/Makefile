CPPS = ClapTrap.cpp ScavTrap.cpp main.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = ${CPPS:.cpp=.o}

NAME = DiamondTrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

.PHONY: all clean fclean re

all: ${NAME};

clean:
	rm -rf ${OBJS}

fclean: clean;
	rm -rf ${NAME}

re: fclean all;
