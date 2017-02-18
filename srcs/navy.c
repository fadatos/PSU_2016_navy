/*
** navy.c for navy in /home/TiphaineLaurent/Navy/PSU_2016_navy_safe
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Mon Jan 30 12:37:02 2017 Tiphaine LAURENT
** Last update Fri Feb 17 21:22:51 2017 albouy titouan
*/

#include "../include/navy.h"

//static pid_t pid_j2;

void		co_p1(int signal, siginfo_t *si, void *ucontext_t)
{
  my_printf("enemy connected : %d\n\n", (int)si->si_pid);
  kill(si->si_pid, SIGUSR1);
  //pid_j2 = si->si_pid;
}

int		player1(t_maps *modif)
{
  struct	sigaction	sa;
  pid_t		pid;

  pid = getpid();
  my_printf("my_pid: %d\n", pid);
  sa.sa_sigaction = co_p1;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = SA_SIGINFO;
  sigaction(USR2, &sa, NULL);
  my_printf("waiting for enemy connexion...\n");
  pause();
  //modif->pid_other = pid_j2;
  return (0);
}

void		hand_usr1(int signal)
{
}

int		player2(pid_t player1, char **av, t_maps *modif)
{
  pid_t		pid;

  pid = getpid();
  //printf("my_pid: %d      %i\n", pid,player1);
  if (kill(player1, USR2) == -1)
    {
      my_putstr_error("");
      return (84);
    }
  my_printf("my_pid: %d\n\n\n", pid);
  signal(SIGUSR1, hand_usr1);
  return (run_game_2(my_atoi(av[1]), av[2], modif ));
}
