/*
** main.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Mon Jan 30 11:01:41 2017 albouy titouan
** Last update Mon Feb 13 14:00:31 2017 albouy titouan
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/navy.h"

void		usage(void)
{
  my_putstr("USAGE\n\t  ./navy [first_player_pid] navy positions\n\n");
  my_putstr("DESCRIPTION\n\t  first_player_pid   only for the 2nd player.");
  my_putstr("pid of the first player,\n\t  navy_positions     ");
  my_putstr("file representing the positions of the ships.\n");
}

char		*open_file(char *file)
{
   int           fd;
  char          *str;
  char          *buffer1;

  str = "";
   if ((fd = open(file, O_RDONLY)) < 0)
     return (NULL);
  while (buffer1 = get_next_line(fd, 0))
    str = my_strcat(str, buffer1);
  close(fd);
  return (str);
}

int		main(int ac, char **av)
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
  else
    {
      my_putstr_error("Too many arguments or too few arguments\n");
      return (84);
    }
  return (next(ac, av));
  }

int		next(int ac, char **av)
{
  if (ac == 2)
    return (run_game_1(av[1]));
  return (run_game_2(my_atoi(av[1]), av[2]));
}

