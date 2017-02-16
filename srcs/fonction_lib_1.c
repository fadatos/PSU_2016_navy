/*
** fonction_lib_1.c for  in /home/fadatos/B1_Modules/B1_Programmation_shell/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Thu Jan 26 10:38:29 2017 albouy titouan
** Last update Sat Feb  4 17:57:16 2017 albouy titouan
*/

#include <unistd.h>
#include "../include/navy.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}

void		my_putchar(char c)
{
  write(1, &c, 1);
}
