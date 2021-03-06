/*
** player_2.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sun Feb  5 23:31:11 2017 albouy titouan
** Last update Sat Feb 18 13:00:25 2017 Tiphaine LAURENT
*/

#include <unistd.h>
#include <stdio.h>
#include "../include/navy.h"

int		run_game_2(int pid, char *file, t_maps *modif)
{
  modif->tab_shoot = init_tab();
  if ((modif->my_tab = send_boat(init_tab(), parsor_file(open_file(file))))
      == NULL)
    {
      my_putstr_error("ERROR: superposition bateaux");
      return (84);
    }
  aff_tab(modif->my_tab);
  my_putstr("\n\n\n");
  aff_tab(modif->tab_shoot);
  my_putstr("\n");
}

