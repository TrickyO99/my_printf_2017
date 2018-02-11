/*
** EPITECH PROJECT, 2017
** disp
** File description:
** stdarg
*/

#include <stdarg.h>
#include "../include/my.h"
#include <unistd.h>

void	list_functions(void(*pntrfunc[])(va_list))
{
	pntrfunc[0] = &flag_d_i;
	pntrfunc[1] = &flag_d_i;
	pntrfunc[2] = &flag_o;
	pntrfunc[3] = &flag_x;
	pntrfunc[4] = &flag_gx;
	pntrfunc[5] = &flag_b;
	pntrfunc[6] = &flag_u;
	pntrfunc[7] = &flag_p;
	pntrfunc[8] = &flag_s;
	pntrfunc[9] = &flag_gs;
	pntrfunc[10] = &flag_c;
	pntrfunc[11] = &flag_pourcent;
	pntrfunc[12] = &flag_m;
}

void	pntrfunc(va_list ap, char *format, int n)
{
	void (*pntrfunc[13])(va_list);
	char flag[13] = {'d', 'i', 'o', 'x', 'X', 'b', 'u',
	'p', 's', 'S', 'c', '%', 'm'};
	int i = 0;

	list_functions(pntrfunc);
	while (i < 13) {
		if (flag[i] == format[n]) {
			pntrfunc[i](ap);
		}
		i = i + 1;
	}
}

int	my_printf(char *format, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%') {
			pntrfunc(ap, format, (i + 1));
			i = i + 1;
		} else {
			my_putchar(format[i]);
		}
		i = i + 1;
	}
	va_end(ap);
	return (0);
}
