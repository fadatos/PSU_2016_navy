/*
** player_1.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sun Feb  5 23:08:03 2017 albouy titouan
** Last update Sat Feb 18 14:34:06 2017 Tiphaine LAURENT
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/navy.h"

void		disp_map(t_maps *maps)
{
  aff_tab(maps->my_tab);
  my_putstr("\n\n\n");
  aff_tab(maps->tab_shoot);
  my_putstr("\n");
}

void		zzz(int signal)
{
}

int		playing_1(t_maps *maps)
{
  char		*gnl;

  while (1)
    {
      disp_map(maps);
      gnl = get_next_line(0, 0);
      sender(gnl, maps->pid_other);
      signal(SIGUSR1, zzz);
      pause();
    }
}

int		run_game_1(char *file, t_maps *modif)
{
  modif->tab_shoot = init_tab();
  if ((modif->my_tab = send_boat(init_tab(), parsor_file(open_file(file))))
      == NULL)
    {
      my_putstr_error("ERROR: superposition bateaux");
      return (84);
    }
  playing_1(modif);
}
