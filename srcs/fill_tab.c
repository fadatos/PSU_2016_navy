/*
** fill_tab.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sun Feb  5 22:10:56 2017 albouy titouan
** Last update Sun Feb  5 22:18:13 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

int             sens_boat(char *file, int j)
{
  if (file[2 + j] == file[5 + j])
    return (1);
  return (0);
}

char            **boat_vertical(int j, int k, char **map, char *buffer1)
{
  while (k < buffer1[0 + j] - 48)
    {
      if (map[buffer1[3 + j] - 47 + k][trad_char(buffer1[2 + j])] != '.')
	return (NULL);
      map[buffer1[3 + j] - 47 + k][trad_char(buffer1[2 + j])] = buffer1[0 + j];
      k = k + 1;
    }
  return (map);
}

char            **boat_horizon(int j, int k, char **map, char *buffer1)
{
  while (k < (buffer1[0 + j] - 48) * 2)
    {
      if (map[buffer1[3 + j] - 47][trad_char(buffer1[2 + j]) + k] != '.')
	return (NULL);
      map[buffer1[3 + j] - 47][trad_char(buffer1[2 + j]) + k] = buffer1[0 + j];
      k = k + 2;
    }
  return (map);
}

char            **send_boat(char **map, char *buffer1)
{
  int           j;
  int           l;
  int           k;

  j = 0;
  l = 0;
  while (l < 4)
    {
      k = 0;
      if (sens_boat(buffer1,j) > 0)
	if ((map = boat_vertical(j, k, map, buffer1)) == NULL)
	  return (NULL);
      if (sens_boat(buffer1,j) == 0)
	if ((map = boat_horizon(j, k, map, buffer1)) == NULL)
	  return (NULL);
      j = j + 8;
      l = l + 1;
    }
  return (map);
}
