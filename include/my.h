/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** prototypes
*/


#ifndef MY_H
#define MY_H

#include <stdarg.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr_base(int nb, char *base);
void	my_put_uint_base(unsigned int nb, char *base);
void	my_put_spe_str(char const *str);
void	my_put_pointer(int pointer);
void	flag_d_i(va_list ap);
void	flag_o(va_list ap);
void	flag_x(va_list ap);
void	flag_gx(va_list ap);
void	flag_b(va_list ap);
void	flag_u(va_list ap);
void	flag_p(va_list ap);
void	flag_s(va_list ap);
void	flag_gs(va_list ap);
void	flag_c(va_list ap);
void	flag_pourcent(va_list ap);
void	flag_m(va_list ap);
void	list_functions(void(*pntrfunc[])(va_list));
void	pntrfunc(va_list ap, char *letter, int n);
void	rb_print_err(char *c);
void	my_putchar_error(char c);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
int	my_printf(char *format, ...);

#endif  /* MY_H */
