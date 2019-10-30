/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_u1, .init = redirect_all_std)
{
    int i = 23;
    my_printf("hello %u", i);
    cr_assert_stdout_eq_str("hello 23");
}

Test(myprintf, flag_u2, .init = redirect_all_std)
{
    int i = 456;
    my_printf("Et bah ca fait combien 456 ? %u", i);
    cr_assert_stdout_eq_str("Et bah ca fait combien 456 ? 456");
}

Test(myprintf, flag_u3, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("Le plus grand ! %u", i);
    cr_assert_stdout_eq_str("Le plus grand ! 2147483647");
}

Test(myprintf, flag_u4, .init = redirect_all_std)
{
    int i = 15689;
    my_printf("On prend plus petit c'est bon %u", i);
    cr_assert_stdout_eq_str("On prend plus petit c'est bon 15689");
}

Test(myprintf, flag_u5, .init = redirect_all_std)
{
    int i = 32165987;
    my_printf("trop simple pour mon printf tout ca %u", i);
    cr_assert_stdout_eq_str("trop simple pour mon printf tout ca 32165987");
}