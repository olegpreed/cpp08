NAME	= easy

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp
TPP     = easyfind.tpp
HDR		= easyfind.hpp
OBJ		= ${SRC:%.cpp=%.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ} ${HDR} ${TPP} Makefile
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp ${HDR} ${TPP} Makefile
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all