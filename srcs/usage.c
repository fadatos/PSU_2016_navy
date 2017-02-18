/*
** usage.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version4/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Thu Feb 16 15:31:47 2017 albouy titouan
** Last update Thu Feb 16 15:37:55 2017 albouy titouan
*/

#include "../include/navy.h"

void		usage(void)
{
  my_putstr("USAGE\n\t  ./navy [first_player_pid] navy positions\n\n");
  my_putstr("DESCRIPTION\n\t  first_player_pid   only for the 2nd player.");
  my_putstr("pid of the first player,\n\t  navy_positions     ");
  my_putstr("file representing the positions of the ships.\n");
}
