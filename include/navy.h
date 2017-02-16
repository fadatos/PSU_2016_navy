/*
** navy.h for  in /home/fadatos/B2_Modules/Unix_system_programmation/include
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Jan 31 01:47:23 2017 albouy titouan
** Last update Tue Feb 14 10:36:54 2017 albouy titouan
*/

#ifndef NAVY_H_
# define NAVY_H_

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
}		t_maps;

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
int             run_game_1(char *file);
int             run_game_2(int pid, char *file);
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
