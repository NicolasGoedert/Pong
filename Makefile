##
## Makefile for makefile in /home/nicolas94200/101pong
## 
## Made by goedert nicolas
## Login   <nicolas94200@epitech.net>
## 
## Started on  Mon Nov 14 15:14:51 2016 goedert nicolas
## Last update Mon Nov 14 15:14:53 2016 goedert nicolas
##

NAME	=	101pong

SRCS	=	101pong.c	\
		my_fct.c	\
		main.c

OBJS	=	$(SRCS:.c=.o)

all:		compile clean

compile:
		gcc -c $(SRCS)
		gcc -lm $(SRCS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all compile clean fclean re
