/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_b1, .init = redirect_all_std)
{
    int i = 23;
    my_printf("hello %b", i);
    cr_assert_stdout_eq_str("hello 10111");
}

Test(myprintf, flag_b2, .init = redirect_all_std)
{
    int i = 456;
    my_printf("Et bah ca fait combien 456 ? %b", i);
    cr_assert_stdout_eq_str("Et bah ca fait combien 456 ? 111001000");
}

Test(myprintf, flag_b3, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("Le plus grand ! %b", i);
    cr_assert_stdout_eq_str("Le plus grand ! 1111111111111111111111111111111");
}

Test(myprintf, flag_b4, .init = redirect_all_std)
{
    int i = 15689;
    my_printf("On prend plus petit c'est bon %b", i);
    cr_assert_stdout_eq_str("On prend plus petit c'est bon 11110101001001");
}

Test(myprintf, flag_b5, .init = redirect_all_std)
{
    int i = 32165987;
    my_printf("tout ca %b", i);
    cr_assert_stdout_eq_str("tout ca 1111010101101000001100011");
}