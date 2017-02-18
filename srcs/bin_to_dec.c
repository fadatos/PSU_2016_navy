/*
** bin_to_dec.c for bin_to_dec in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Feb  7 17:10:47 2017 Tiphaine LAURENT
** Last update Fri Feb 17 16:00:59 2017 albouy titouan
*/

#include "../include/navy.h"

int		*fill_tab()
{
  int		*tab;

  if (!(tab = malloc(sizeof(int) * 8)))
    return (NULL);
  tab[0] = 1;
  tab[1] = 2;
  tab[2] = 4;
  tab[3] = 8;
  tab[4] = 16;
  tab[5] = 32;
  tab[6] = 64;
  tab[7] = 128;
  tab[8] = '\0';
  return (tab);
}

int		bin_to_dec(char	*bin)
{
  int		*tab_bin;
  int		dec;
  int		i;

  // bin = cut_tail(bin);
  bin = my_revstr(bin);
  tab_bin = fill_tab();
  i = 0;
  dec = 0;
  my_putstr(bin);
  while (tab_bin[i] && bin[i])
    {
      if (bin[i] == '1')
	dec += tab_bin[i];
      i += 1;
    }
  my_putchar('\n');
  my_putnbr(dec);
  return (dec);
}
