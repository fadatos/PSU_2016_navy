/*
** main.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Mon Jan 30 11:01:41 2017 albouy titouan
** Last update Fri Feb 17 16:35:32 2017 albouy titouan
*/

#include "../include/navy.h"

int		next2(int ac, char **av)
{
  t_maps        *modif;

  if ((modif = malloc(sizeof(t_maps))) == NULL)
    return (84);
  if (ac == 2)
    {
      player1(modif);
      return (run_game_1(av[1], modif));
    }
  return (player2(my_atoi(av[1]), av, modif));
}

int             next1(int ac, char **av)
{
  if (ac == 2)
    {
      if (check_2_arg_1(av[1]) != 0)
	return (0);
      else if (check_2_arg_2(av[1]) != 0)
	return (84);
    }
  else if (ac == 3)
    {
      if (check_3_arg(av[1], av[2]) == 1)
	{
	  my_putstr_error("Erreur PID ou erreur de lecture d'une des positions.\n");
	  return (84);
	}
    }
  return (next2(ac, av));
}

int		main(int ac, char **av)
{
  if (ac == 2 || ac == 3)
    return (next1(ac, av));
  else
    {
      my_putstr_error("Too many arguments or too few arguments\n");
      return (84);
    }
}
