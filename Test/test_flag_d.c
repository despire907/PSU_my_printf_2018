/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_d1, .init = redirect_all_std)
{
    int i = 18;
    my_printf("j'ai %d ans", i);
    cr_assert_stdout_eq_str("j'ai 18 ans");
}

Test(myprintf, flag_d2, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("Un int contien %d", i);
    cr_assert_stdout_eq_str("Un int contien 2147483647");
}

Test(myprintf, flag_d3, .init = redirect_all_std)
{
    int i = 974;
    my_printf("Le numéro de département de la reunion est %d", i);
    cr_assert_stdout_eq_str("Le numéro de département de la reunion est 974");
}

Test(myprintf, flag_d4, .init = redirect_all_std)
{
    int i = 9;
    int b = 20;
    my_printf("Je travaille tout les jours de %d h à %d h", i, b);
    cr_assert_stdout_eq_str("Je travaille tout les jours de 9 h à 20 h");
}

Test(myprintf, flag_d5, .init = redirect_all_std)
{
    my_printf("%d %d %d %d %d %d %d %d %d", 1, 2, 3, 4, 5, 6, 7, 8, 9);
    cr_assert_stdout_eq_str("1 2 3 4 5 6 7 8 9");
}