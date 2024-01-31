CPPS = main.cpp ClapTrap.cpp

OBJS = ${CPPS::.cpp=.o}

NAME = claptrap
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
