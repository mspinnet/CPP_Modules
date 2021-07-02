# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 15:53:16 by mspinnet          #+#    #+#              #
#    Updated: 2021/05/06 15:15:52 by mspinnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Serialize.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= Serialization

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror -I.

RM		= rm -f

HPP		= Serialize.hpp

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
