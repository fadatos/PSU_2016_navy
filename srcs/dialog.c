/*
** dialog.c for dialog in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Feb  3 14:55:48 2017 Tiphaine LAURENT
** Last update Mon Feb 13 16:24:51 2017 Tiphaine LAURENT
*/

#include "navy.h"

static	int	message = 0;
static	int	end = 0;

void				nothing(int signal)
{
}

void				send_kill(pid_t to, int signal)
{
  kill(to, signal);
}

int				send(char *to_send, pid_t receiver)
{
  char				*letter;

  letter = letter_1(to_send);
  my_putstr(letter);
  while (letter[0] != 0)
    {
      usleep(5000);
      send_kill(receiver, SIGUSR2);
      letter[0] -= 1;
    }
  send_kill(receiver, SIGUSR1);
  signal(SIGUSR2, nothing);
  pause();
  my_putstr("letter send\n");
  while (letter[1] != 0)
    {
      usleep(5000);
      send_kill(receiver, SIGUSR2);
      letter[1] -= 1;
    }
  return (0);
}

void				handler(int signal)
{
  if (signal == SIGUSR1)
    end = 1;
  if (signal == SIGUSR2)
    message += 1;
  my_putnbr(message);
}

char				*receive(pid_t sender)
{
  struct	sigaction	sa;
  char				*coords;

  if ((coords = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  coords[2] = '\0';
  //sa.sa_handler = handler;
  // sigemptyset(&sa.sa_mask);
  while (3)
    {
      /* sigaction(SIGUSR2, &sa, NULL); */
      /* sigaction(SIGALRM, &sa, NULL); */
      /* pause(); */
      signal(SIGUSR2, handler);
      signal(SIGUSR1, handler);      
      pause();
      my_putstr("test");
      my_putnbr(end);
    }
  coords[0] = to_letter(message);
  message = 0;
  end = 0;
  usleep(5000);
  send_kill(sender, SIGUSR2);
  my_putstr("second message received\n");
  while (end == 0)
    {
      sigaction(SIGUSR2, &sa, NULL);
      sigaction(SIGALRM, &sa, NULL);
      pause();
    }
  coords[1] = to_digit(message);
  my_printf("\n%s\n", coords);
  return (coords);
}
