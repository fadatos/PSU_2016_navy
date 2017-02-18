/*
** cut_tail.c for cut_tail in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Feb 16 15:57:21 2017 Tiphaine LAURENT
** Last update Fri Feb 17 14:42:47 2017 albouy titouan
*/

#include "../include/navy.h"

char		*cut_tail(char *to_cut)
{
  int		length;

  length = my_strlen(to_cut) - 1;
  while (to_cut[length] == '0')
    {
      to_cut[length] = '\0';
      length -= 1;
    }
  return (to_cut);
}
