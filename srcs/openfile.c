/*
** openfile.c for  in /home/fadatos/B2_Modules/Unix_system_programmation/version4/srcs
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Thu Feb 16 15:36:59 2017 albouy titouan
** Last update Thu Feb 16 15:44:37 2017 albouy titouan
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/navy.h"

char		*open_file(char *file)
{
  int		fd;
  char		*str;
  char		*buffer1;

  str = "";
  if ((fd = open(file, O_RDONLY)) < 0)
    return (NULL);
  while (buffer1 = get_next_line(fd, 0))
    str = my_strcat(str, buffer1);
  close(fd);
  return (str);
}
