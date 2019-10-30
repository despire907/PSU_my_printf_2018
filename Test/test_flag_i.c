/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_i1, .init = redirect_all_std)
{
    int i = 18;
    my_printf("j'ai %i ans", i);
    cr_assert_stdout_eq_str("j'ai 18 ans");
}

Test(myprintf, flag_i2, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("Un int contien %i", i);
    cr_assert_stdout_eq_str("Un int contien 2147483647");
}

Test(myprintf, flag_i3, .init = redirect_all_std)
{
    int i = 974;
    my_printf("Le numéro de département de la reunion est %i", i);
    cr_assert_stdout_eq_str("Le numéro de département de la reunion est 974");
}

Test(myprintf, flag_i4, .init = redirect_all_std)
{
    int i = 9;
    int b = 20;
    my_printf("Je travaille tout les jours de %i h à %i h", i, b);
    cr_assert_stdout_eq_str("Je travaille tout les jours de 9 h à 20 h");
}

Test(myprintf, flag_i5, .init = redirect_all_std)
{
    my_printf("%i %i %i %i %i %i %i %i %i", 1, 2, 3, 4, 5, 6, 7, 8, 9);
    cr_assert_stdout_eq_str("1 2 3 4 5 6 7 8 9");
}

