/*
** get_next_line.h for  in /home/fadatos
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sat Jan 14 21:39:11 2017 albouy titouan
** Last update Sat Feb  4 19:25:53 2017 albouy titouan
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
# define READ_SIZE (500)
# endif

# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_get_curs
{
  int		i;
  int		j;
  int		check_read;
}		t_get_curs;

int		my_strlen(char *str);
char		*my_memset(char *str, int j, int i);
char		*my_strcpy_cust(char *str2, char str, int i);
char		*get_next_line(const int fd, int a);

#endif /* !GET_NEXT_LINE_H_ */
/* #endif /\* !READ_SIZE *\/ */
