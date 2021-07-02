# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 15:53:16 by mspinnet          #+#    #+#              #
#    Updated: 2021/05/08 12:35:35 by mspinnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= Iter

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror -I.

RM		= rm -f

HPP		= iter.hpp

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
