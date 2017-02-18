/*
** help.c for help in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Mon Jan 30 12:41:29 2017 Tiphaine LAURENT
** Last update Fri Feb 17 14:43:25 2017 albouy titouan
*/

#include "../include/navy.h"

int		disp_help(void)
{
  my_putstr("USAGE\n");
  my_putstr("\t   ./navy [first_player_pid] navy_positions\n");
  my_putstr("DESCRIPTION\n");
  my_putstr("\t   first_player_pid\tonly for the 2nd player.");
  my_putstr("pid of the first player,\n");
  my_putstr("\t   navy_positions\tfile representating ");
  my_putstr("the postions of the ships.\n");
  return (0);
}
