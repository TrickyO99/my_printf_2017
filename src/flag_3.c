/*
** EPITECH PROJECT, 2017
** disp
** File description:
** stdarg
*/

#include <stdarg.h>
#include "../include/my.h"

void	flag_gs(va_list ap)
{
	my_put_spe_str(va_arg(ap, char *));
}

void	flag_c(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void	flag_pourcent(va_list ap)
{
	my_putchar('%');
}

void	flag_m(va_list ap)
{
	rb_print_err(va_arg(ap, char *));
}