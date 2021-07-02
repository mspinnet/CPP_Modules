# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 15:53:16 by mspinnet          #+#    #+#              #
#    Updated: 2021/05/08 15:50:34 by mspinnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Array.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= array

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror -I.

RM		= rm -f

HPP		= Array.hpp

all:	${NAME}

%.o: %.cpp ${HPP}
		${CLANG} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:${OBJS} ${HPP}
		${CLANG} ${FLAGS} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
