/*
** EPITECH PROJECT, 2018
** rb_print_r
** File description:
** my_putchar but in 2
*/


#include "../include/my.h"
#include <unistd.h>

void	rb_print_err(char *c)
{
	int i = 0;

	while (c[i] != '\0') {
		my_putchar_error(c[i]);
		i = i + 1;
	}
}