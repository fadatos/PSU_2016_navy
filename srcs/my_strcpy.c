/*
** my_strcpy.c for my_strcpy in /home/fadatos/libmy/libmy_piscine_C
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Nov  4 21:13:47 2016 albouy titouan
** Last update Thu Feb  2 12:26:57 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

char		*my_strcpy(char *str1, char *str2)
{
  int		i;
  int		size;
  char		*str3;

  size = my_strlen(str1);
  if ((str3 = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str1[i] != '\0')
    {
      str3[i] = str1[i];
      i++;
    }
  str3[i] = '\0';
  i = 0;
  while (str3[i] != '\0' && i <= size && str2[i] != '\0')
    {
      str3[i] = str2[i];
      i++;
    }
  return (str3);
}
