/*
** parsor.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sat Feb  4 19:02:28 2017 albouy titouan
** Last update Thu Feb 16 15:29:54 2017 albouy titouan
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/navy.h"

int		check_nombre_pars(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int		check_alpha_pars(char c)
{
  if (c >= 'a' && c <= 'h' || c >= 'A' && c <= 'H')
    return (1);
  return (0);
}

char            *parsor_check2(t_parsor *info, char *file, char *str)
{
    if  (file[info->i] == '\n')
      {
	str[info->y++] = file[info->i];
	info->nb = 0;
	info->m = 0;
      }
    else
      return (NULL);
}

char		*parsor_check(t_parsor *info, char *file, char *str)
{
  if (check_nombre_pars(file[info->i]) == 1 && info->nb == 0)
    {
      info->nb = 1;
      str[info->y++] = file[info->i];
    }
  else if (check_alpha_pars(file[info->i]) == 1 && info->alpha == 0)
    {
      info->alpha = 1;
      str[info->y++] = file[info->i];
    }
  else if (info->nb == 1 && info->alpha == 1 &&
	   file[info->i] == ':' && info->m < 2)
    {
      str[info->y++] = ':';
      ++info->m;
      info->alpha = 0;
      info->nb = 0;
    }
  else if (file[info->i] == '\n')
    {
      str[info->y++] = file[info->i];
      info->nb = 0;
      info->m = 0;
      info->n++;
    }
  else
    return (NULL);
  return (str);
}

char		*parsor_file(char *file)
{
  char		*str;
  t_parsor	*info;

  if ((info = malloc(sizeof(t_parsor))) == NULL)
    return (NULL);
  info->i = 0;
  info->m = 0;
  info->y = 0;
  info->nb = 0;
  info->alpha = 1;
  info->n = 0;
  if ((str = malloc(sizeof(char) * (my_strlen(file) + 1))) == NULL)
    return (NULL);
  while (file[info->i] != '\0')
    {
      if ((str = parsor_check(info, file, str)) == NULL)
	return (NULL);
      ++info->i;
    }
  if (info->n != 4)
    return (NULL);
  str[info->y] = '\0';
  return (str);
}

/*
int		main()
{
  char		*test;
  char		*test2;

  test = malloc(sizeof(char) * 1000);
  test2 = malloc(sizeof(char) * 1000);
  test = "2:C1:C2\n3:D4:F4\n4:B5:B8\n5:D7:H7\n\n";
  if ((test2 = parsor_file(test)) != NULL)
    my_putstr(test2);
    }*/

