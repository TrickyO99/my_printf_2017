/*
** EPITECH PROJECT, 2018
** my_putchar_error
** File description:
** oui
*/

#include "../include/my.h"
#include <unistd.h>

void	my_putchar_error(char c)
{
	write(2, &c, 1);
}
