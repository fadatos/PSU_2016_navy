/*
** init_tab.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Wed Feb  1 09:27:28 2017 albouy titouan
** Last update Sun Feb  5 22:17:07 2017 albouy titouan
*/

#include <stdlib.h>
#include "../include/navy.h"

char		**init_tab()
{
  char		**tab;

  if ((tab = malloc(sizeof(char **) * 11)) == NULL)
    return (NULL);
  tab[0] = my_strcat(""," |A B C D E F G H");
  tab[1] = my_strcat("","-+---------------");
  tab[2] = my_strcat("","1|. . . . . . . .");
  tab[3] = my_strcat("","2|. . . . . . . .");
  tab[4] = my_strcat("","3|. . . . . . . .");
  tab[5] = my_strcat("","4|. . . . . . . .");
  tab[6] = my_strcat("","5|. . . . . . . .");
  tab[7] = my_strcat("","6|. . . . . . . .");
  tab[8] = my_strcat("","7|. . . . . . . .");
  tab[9] = my_strcat("","8|. . . . . . . .");
  tab[10] = NULL;
  return (tab);
}
