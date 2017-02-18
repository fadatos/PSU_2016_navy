/*
** communcation.c for communication in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Feb 16 10:20:18 2017 Tiphaine LAURENT
** Last update Fri Feb 17 15:27:10 2017 albouy titouan
*/

#include "../include/navy.h"

static		char	buff[] = "00000000";
static		int	count = 0;

void			handler(int signal)
{
  printf("Received : %d\n", signal);
  if (signal == SIGUSR1)
    buff[count] = '0';
  if (signal == SIGUSR2)
    buff[count] = '1';
  count += 1;
}

void			make_kill(int to, int signal)
{
  usleep(5000);
  if (kill(to, signal) == -1)
    printf("Unable to kill %d with %d\n ", to, signal);
}

void			send_letter(char *letter, int to)
{
  int			i;

  i = 0;
  my_putstr(letter);
  while (*letter || i < 8)
    {
      usleep(10000);
      if (*letter == '1')
	make_kill(to, SIGUSR2);
      if (*letter == '0')
	make_kill(to, SIGUSR1);
      if (!(*letter))
	make_kill(to, SIGUSR1);
      /* signal(SIGUSR1, NULL); */
      /* pause(); */
      letter += 1;
      i += 1;
    }
}

int			sender(char *message, int to)
{
  char			*letter;

  if (!(message))
    return (84);
  while (*message)
    {
      usleep(500000);
      letter = base_me(*message, 2);
      if (!(letter))
	return (84);
      my_printf("Sending letter\n");
      send_letter(letter, to);
      message += 1;
    }
  return (0);
}

int			receiver(int from)
{
  int			i;

  i = 0;
  count = 0;
  while (i < 8)
    {
      signal(SIGUSR1, handler);
      signal(SIGUSR2, handler);
      pause();
      i += 1;
    }
  return (bin_to_dec(buff));
}
