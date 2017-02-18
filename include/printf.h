/*
** printf.h for printf.h in /home/TiphaineLaurent/PSU_2016_my_printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Nov  9 18:20:52 2016 Tiphaine LAURENT
** Last update Fri Feb 17 14:49:39 2017 albouy titouan
*/

# ifndef PRINTF_H_
# define PRINTF_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	my_printf(char *, ...);
int	base(long int, int);
int	arg_unsigned_int(va_list);
int	arg_char(va_list);
int	arg_string(va_list);
int	arg_unsigned_bin(va_list);
int	arg_3octal(unsigned int);
int	arg_string_octal(va_list);
int	arg_unsigned_hexa_int(va_list);
int	arg_int(va_list);
int	arg_octal(va_list);
int	arg_pointer(va_list);
int	arg_unsigned_hexa_int_upp(va_list);
int	arg_per();

typedef struct	s_flags
{
  char		flag;
  int		(*fct)(va_list args);
}		t_flags;

#endif /* !PRINTF_H_ */
