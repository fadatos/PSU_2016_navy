##
## Makefile for Makefile in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Mon Jan 30 11:15:47 2017 Tiphaine LAURENT
## Last update Sat Feb 18 12:57:34 2017 Tiphaine LAURENT
##

CC	=	gcc
CFLAGS	+=	-W -Wall
#CFLAGS	+=	-ansi -pedantic
LDFLAGS	+=	-I. -lmy -lprintf -L.

NAME	=	navy

SRCS	=	main.c		\
		navy.c		\
		help.c		\
		communication.c	\
		bin_to_dec.c	\
		attack.c	\
		init_tab.c	\
		check_file.c	\
		fill_input.c	\
		fill_tab.c      \
		fonction_lib_1.c\
		openfile.c	\
		fonction_lib_2.c\
		parsor.c	\
		fonction_lib_3.c\
		player_1.c	\
		fonction_lib_4.c\
		my_strcat.c	\
		player_2.c	\
		get_next_line.c	\
		usage.c		

RM	=	rm -f


all:
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
