/*
** EPITECH PROJECT, 2017
** my put pointer
** File description:
** prints pointer
*/

#include "../include/my.h"

void	my_put_pointer(int pointer)
{
	my_putchar('0');
	my_putchar('x');
	my_put_nbr_base(pointer, "0123456789abcdef");
}