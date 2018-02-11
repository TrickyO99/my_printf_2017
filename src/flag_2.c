/*
** EPITECH PROJECT, 2017
** disp
** File description:
** stdarg
*/

#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

void	flag_b(va_list ap)
{
	my_put_nbr_base(va_arg(ap, int), "01");
}

void	flag_u(va_list ap)
{
	my_put_uint_base(va_arg(ap, unsigned int), "0123456789");
}

void	flag_p(va_list ap)
{
	my_put_pointer(va_arg(ap, int));
}

void	flag_s(va_list ap)
{
	char *oui = va_arg(ap, char *);

	if (oui != NULL) {
		my_putstr(oui);
	}
}