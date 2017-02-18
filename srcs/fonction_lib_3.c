/*
** fonction_lib_3.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Wed Feb  1 11:38:06 2017 albouy titouan
** Last update Fri Feb 17 16:05:50 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

int		my_atoi(char *str)
{
  int		i;
  int		ret;
  char		c;

  ret = 0;
  i = 0;
  while (str[i]!='\0')
    {
      ret = ret * 10 + str[i] - '0';
      i++;
    }
  return (ret);
}

int		my_putnbr(int nb)
{
  int		modulo;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0)
    {
      if (nb > 9)
	{
	  modulo = (nb % 10);
	  nb = (nb - modulo) / 10;
	  my_putnbr(nb);
	  my_putchar(48 + modulo);
	}
      else
	my_putchar(48 + nb);
    }
  return (0);
}

int		check_num(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (1);
      i++;
    }
  return (0);
}

void		aff_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

int		trad_char(char c)
{
  if (c == 'A')
    return (2);
  if (c == 'C')
    return (6);
  if (c == 'B')
    return (4);
  if (c == 'D')
    return (8);
  if (c == 'E')
    return (10);
  if (c == 'F')
    return (12);
  if (c == 'G')
    return (14);
  if (c == 'H')
    return (16);
  return (0);
}
