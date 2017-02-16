/*
** strncmp.c for  in /home/fadatos
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Jan 20 16:29:03 2017 albouy titouan
** Last update Wed Feb  1 12:02:16 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

int		my_strcmp(char *s1, char *s2, int x)
{
  int		i;

  if (s1 == NULL || s2 == NULL)
    return (1);
  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && x > i)
    {
      if (s2[i] == '\0')
	return (0);
      i++;
    }
  if ((s1[i] - s2[i]) == 0)
    return (0);
  return (1);
}

int		check_alpha_pos(char c)
{
  if (c >= 'A' && c <= 'H')
    return (0);
  return(1);
}

int		check_num_pos(char c)
{
  if (c >=  '1' && c <= '8')
    return (0);
  return (1);
}

int		my_abs(int nb)
{
  if (nb < 0)
    return (-1 * nb);
  return (nb);
}
