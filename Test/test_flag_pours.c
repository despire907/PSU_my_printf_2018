/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_pours1, .init = redirect_all_std)
{
    my_printf("hello %%");
    cr_assert_stdout_eq_str("hello %");
}

Test(myprintf, flag_pours2, .init = redirect_all_std)
{
    my_printf("Combien fait -25 %% de 38 ?");
    cr_assert_stdout_eq_str("Combien fait -25 % de 38 ?");
}

Test(myprintf, flag_pours3, .init = redirect_all_std)
{
    my_printf("Est-ce que ca a marche ? %%");
    cr_assert_stdout_eq_str("Est-ce que ca a marche ? %");
}

Test(myprintf, flag_pours4, .init = redirect_all_std)
{
    my_printf("que c'est long la %% !");
    cr_assert_stdout_eq_str("que c'est long la % !");
}

Test(myprintf, flag_pours5, .init = redirect_all_std)
{
    my_printf("que mon flag %% ne marche pas.");
    cr_assert_stdout_eq_str("que mon flag % ne marche pas.");
}