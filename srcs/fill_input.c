/*
** fill_input.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version4/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Feb 17 02:52:34 2017 albouy titouan
** Last update Fri Feb 17 15:04:11 2017 albouy titouan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/navy.h"

int             check_alpha_pos1(char c)
{
  if (c >= 'a' && c <= 'h')
    return (0);
  return(1);
}

char		*echange_char(char *str)
{
  char		c;

  if (check_num_pos(str[0]) == 0)
    {
      c = str[0];
      str[0] = str[1];
      str[1] = c;
    }
  return (str);
}

char		*fill_coord_attack(char *str, t_coord_att   *mp)
{
  char		*new_str;

  if ((new_str = malloc(sizeof(char *) * 3)) == NULL)
    return (NULL);
  while (str[mp->i] != '\0')
    {
      if (check_num_pos(str[mp->i]) == 0 && mp->nb == 0)
	{
	  mp->nb = 1;
	  new_str[mp->y++] = str[mp->i++];
	}
      else if ((check_alpha_pos(str[mp->i]) == 0 ||
		check_alpha_pos1(str[mp->i]) == 0) && mp->alpha == 0)
	{
	  mp->alpha = 1;
	  new_str[mp->y++] = str[mp->i++];
	}
      else if (str[mp->i] == ' ' || str[mp->i] == '\t')
	mp->i++;
      else
	return (NULL);
    }
  new_str[mp->y] = '\0';
  return (echange_char(new_str));
}

char		*init_coord_attack(char *str)
{
  char		*new_str;
  t_coord_att	*mp;

  if ((mp = malloc(sizeof(t_coord_att))) == NULL)
    return (NULL);
  mp->i = 0;
  mp->y = 0;
  mp->alpha = 0;
  mp->nb = 0;
  new_str = fill_coord_attack(str, mp);
  return(new_str);
}
