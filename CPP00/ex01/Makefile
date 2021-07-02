# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 15:53:16 by mspinnet          #+#    #+#              #
#    Updated: 2021/04/16 13:49:49 by mspinnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contacts.cpp search.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= PhoneBook

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror -I.

RM		= rm -f

HPP		= Contacts.hpp

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
