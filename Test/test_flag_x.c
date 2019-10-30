/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_x1, .init = redirect_all_std)
{
    int i = 456;
    my_printf("hello %x", i);
    cr_assert_stdout_eq_str("hello 1c8");
}

Test(myprintf, flag_x2, .init = redirect_all_std)
{
    int i = 23;
    my_printf("hello %x", i);
    cr_assert_stdout_eq_str("hello 17");
}

Test(myprintf, flag_x3, .init = redirect_all_std)
{
    int i = 283;
    my_printf("hello %x", i);
    cr_assert_stdout_eq_str("hello 11b");
}

Test(myprintf, flag_x4, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("hello %x", i);
    cr_assert_stdout_eq_str("hello 7fffffff");
}

Test(myprintf, flag_x5, .init = redirect_all_std)
{
    int i = 123456;
    my_printf("hello %x", i);
    cr_assert_stdout_eq_str("hello 1e240");
}