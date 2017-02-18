/*
** player_1.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version2/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sun Feb  5 23:08:03 2017 albouy titouan
** Last update Fri Feb 17 16:35:51 2017 albouy titouan
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/navy.h"

int		run_game_1(char *file, t_maps *modif)
{
  modif->tab_shoot = init_tab();
  if ((modif->my_tab = send_boat(init_tab(), parsor_file(open_file(file))))
      == NULL)
    {
      my_putstr_error("ERROR: superposition bateaux");
      return (84);
    }

  //
  aff_tab(modif->my_tab);
  my_putstr("\n\n\n");
  aff_tab(modif->tab_shoot);
  my_putstr("\n");
  //


  //attack_received("C1", modif);
  //aff_tab(modif->my_tab);
}
/*
int		attack_received(char *coord, t_maps *modif)
{

  if (modif->my_tab[coord[1] - 47][trad_char(coord[0])] == '.')
    {
      modif->touch = 0;
      modif->my_tab[coord[1] - 47][trad_char(coord[0])] = 'o';
    }
  else
    {
      modif->touch = 1;
      modif->my_tab[coord[1] - 47][trad_char(coord[0])] = 'x';
    }
  return (0);
}

int		attak_send(char *coord, t_maps *modif)
{

  // envoi de des cordonées attack
  // reception de la variable etat de l'autre player

  if ( /* variable de retour  == 0)
    {
      modif->touch = 0;
      modif->tab_shoot[coord[1] - 47][trad_char(coord[0])] = 'o';
    }
  else
    {
      modif->touch = 1;
      modif->tab_shoot[coord[1] - 47][trad_char(coord[0])] = 'x';
    }
  return (0);
}
*/
