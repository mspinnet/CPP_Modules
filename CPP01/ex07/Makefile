# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 17:02:17 by mspinnet          #+#    #+#              #
#    Updated: 2021/04/19 14:07:06 by mspinnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= replace

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:	${NAME}

%.o: %.cpp
		${CLANG} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:${OBJS}
		${CLANG} ${FLAGS} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		${RM} *.replace

re:		fclean all
