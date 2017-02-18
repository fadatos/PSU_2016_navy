/*
** navy.h for  in /home/fadatos/B2_Modules/Unix_system_programmation/include
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Jan 31 01:47:23 2017 albouy titouan
** Last update Fri Feb 17 16:44:55 2017 albouy titouan
*/

#ifndef NAVY_H_
# define NAVY_H_

# include <sys/types.h>
# include <sys/wait.h>
# include <sys/resource.h>
# include <signal.h>

# include <stdio.h>
# include <string.h>

# include "my.h"
# include "printf.h"

# define USR1 10
# define USR2 12

typedef struct	s_parsor
{
  int		i;
  int		y;
  int		m;
  int		n;
  int		nb;
  int		alpha;
}		t_parsor;

typedef struct s_maps
{
  char		**my_tab;
  char		**tab_shoot;
  int		touch;
  int		pid_other;
}		t_maps;

typedef struct	s_corrd_att
{
  int		i;
  int		y;
  int		alpha;
  int		nb;
}		t_coord_att;

int             navy(int ac, char **av);
int             disp_help(void);
//int           dialog(char *to_send, pid_t receiver);
int             send(char *message, pid_t receiver);
char            *receive(pid_t sender);
char            *letter_1(char *to_send);
int             digit(char c);
int             alpha(char c);
char            to_letter(int message);
char            to_digit(int message);
int             bin_to_dec(char *bin);
int             jouer1(pid_t joueur2);
int             jouer2(pid_t joueur1);
int             player1(t_maps *modif);
int             player2(pid_t player1, char **av, t_maps *modif);

int             sender(char *message, int to);
int             receiver(int from);
char            *cut_tail(char *to_cut);

int             check_2_arg_1(char *arg);
int             check_2_arg_2(char *arg);
int             check_3_arg(char *arg1, char *arg2);
int             check_file(char *file);
int             my_strlen(char *str);
int             check_num(char *str);
int             my_strcmp(char *s1, char *s2, int x);
int             check_alpha_pos(char c);
int             check_num_pos(char c);
int             check_size_boat(char *file, int i, int j, int k);
int             next(int ac, char **av);
int             my_putnbr(int nb);
int             my_atoi(char *str);
int             my_abs(int nb);
int             trad_char(char c);
int             run_game_1(char *file, t_maps *modif);
int             run_game_2(int pid, char *file, t_maps *modif);
void            usage(void);
void            aff_tab(char **tab);
void            my_putstr(char *str);
void            my_putstr_error(char *str);
void            my_putchar(char c);
char            **init_tab();
char            **send_boat(char **map, char *file);
char            *my_strcpy(char *str1, char *str2);
char            *my_strcat(char *s1,char *s2);
char            *open_file(char *file);
char            *get_next_line(const int fd, int a);
char            *parsor_file(char *file);

#endif /* !NAVY_H_ */
