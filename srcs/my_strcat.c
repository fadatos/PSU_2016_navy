/*
** my_strcat.c for my_strcat in /home/fadatos/delivery/argument
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Oct 18 10:48:11 2016 albouy titouan
** Last update Sat Feb  4 18:15:19 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

char		*loop_strcat1(char *buff, char *s1, int i)
{
  while (s1[i] != '\0')
    {
      buff[i] = s1[i];
      i++;
    }
  return (buff);
}

char		*loop_strcat2(char *buff, char *s2, int i)
{
  int		j;

  j = 0;
  while (s2[j] != '\0')
    {
      buff[i] = s2[j];
      i++;
      j++;
    }
  buff[i] = '\0';
  return (buff);
}


char		*my_strcat(char *s1, char *s2)
{
  int		size_s1;
  int		size_s2;
  int		i;
  char		*buff;

  size_s1 = my_strlen(s1);
  size_s2 = my_strlen(s2);
  if ((buff = malloc(sizeof(char) * (size_s1 + size_s2 + 1))) == NULL)
    return (NULL);
  buff = loop_strcat1(buff, s1, 0);
  buff = loop_strcat2(buff, s2, size_s1);
  return (buff);
}
