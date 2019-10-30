/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_xu1, .init = redirect_all_std)
{
    int i = 456;
    my_printf("hello %X", i);
    cr_assert_stdout_eq_str("hello 1C8");
}

Test(myprintf, flag_xu2, .init = redirect_all_std)
{
    int i = 23;
    my_printf("hello %X", i);
    cr_assert_stdout_eq_str("hello 17");
}

Test(myprintf, flag_xu3, .init = redirect_all_std)
{
    int i = 283;
    my_printf("hello %X", i);
    cr_assert_stdout_eq_str("hello 11B");
}

Test(myprintf, flag_xu4, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("hello %X", i);
    cr_assert_stdout_eq_str("hello 7FFFFFFF");
}

Test(myprintf, flag_xu5, .init = redirect_all_std)
{
    int i = 123456;
    my_printf("hello %X", i);
    cr_assert_stdout_eq_str("hello 1E240");
}