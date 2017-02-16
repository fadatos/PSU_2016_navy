/*
** check_file.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Jan 31 09:16:35 2017 albouy titouan
** Last update Sun Feb 12 21:18:26 2017 albouy titouan
*/

#include "stdlib.h"
#include "../include/navy.h"

int		check_size_boat(char *file, int i, int j, int k)
{
  int		l;
  int		m;

  while (i < 4)
    {
      l = file[2+j] - file[5+j];
      m = file[3+j] - file[6+j];
      if (l < 0)
	l = my_abs(file[2+j] - file[5+j]);
      if (m < 0)
	m = my_abs(file[3+j] - file[6+j]);
      if (m != 0 && l != file[0+j] - 49 || l != 0 && m != file[0+j] - 49)
	{
	  i = i + 1;
	  k = k + file[0 + j] - 48;
	  j = j + 8;
	}
      else
	return (84);
    }
  if (k != 14)
    return (84);
  return (0);
}

int		check_2_arg_1(char *arg)
{
  if (my_strcmp(arg, "-h", 3) == 0)
    {
      usage();
      return (1);
    }
  return (0);
}

int		check_2_arg_2(char *arg)
{
  if (check_file(arg) != 0)
    {
      my_putstr_error("Erreur de lecture d'une des positions.\n");
      return (1);
    }
  return (0);
}

int		check_file(char *file)
{
  if (open_file(file) == NULL)
    return (84);
  if (check_size_boat(parsor_file(open_file(file)), 0, 0, 0) != 0)
	return (84);
  return (0);
}

  int		check_3_arg(char *arg1, char *arg2)
  {
    if (check_num(arg1) != 0)
      return (1);
    if (check_file(arg2) != 0)
      return (1);
    return (0);
  }
