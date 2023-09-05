NAME	= span

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf
SRC		= main.cpp Span.cpp
HDR		= Span.hpp
OBJ		= ${SRC:%.cpp=%.o}

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ} ${HDR} Makefile
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp ${HDR} Makefile
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all