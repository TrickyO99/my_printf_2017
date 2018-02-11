/*
** EPITECH PROJECT, 2017
** disp
** File description:
** stdarg
*/

#include <stdarg.h>
#include "../include/my.h"

void	flag_d_i(va_list ap)
{
	my_put_nbr_base(va_arg(ap, int), "0123456789");
}

void	flag_o(va_list ap)
{
	my_put_uint_base(va_arg(ap, unsigned int), "01234567");
}

void	flag_x(va_list ap)
{
	my_put_uint_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void	flag_gx(va_list ap)
{
	my_put_uint_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}