/*
** EPITECH PROJECT, 2018
** tests
** File description:
** unit tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <stdio.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(utils, flag_d_i, .init = redirect_all_std) {
	cr_assert(my_printf("oui") == my_strlen("oui"));
}