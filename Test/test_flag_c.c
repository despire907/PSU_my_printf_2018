/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_c1, .init = redirect_all_std)
{
    my_printf("Bonjour %c", 'c');
    cr_assert_stdout_eq_str("Bonjour c");
}

Test(myprintf, flag_c2, .init = redirect_all_std)
{
    my_printf("%c %c %c %c %c", 'a', 'b', 'c', 'd', 'e');
    cr_assert_stdout_eq_str("a b c d e");
}

Test(myprintf, flag_c3, .init = redirect_all_std)
{
    my_printf("Mr %c comment allez vous ?", 'X');
    cr_assert_stdout_eq_str("Mr X comment allez vous ?");
}

Test(myprintf, flag_c4, .init = redirect_all_std)
{
    my_printf("Bienvenue au batiment %c", 'D');
    cr_assert_stdout_eq_str("Bienvenue au batiment D");
}

Test(myprintf, flag_c5, .init = redirect_all_std)
{
    my_printf("Allez un petit %c a mon devoir", 'A');
    cr_assert_stdout_eq_str("Allez un petit A a mon devoir");
}

