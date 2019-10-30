/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

void  redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(myprintf, simple_string1, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(myprintf, simple_string2, .init = redirect_all_std)
{
    my_printf("Bonjour, comment allez-vous ?");
    cr_assert_stdout_eq_str("Bonjour, comment allez-vous ?");
}

Test(myprintf, simple_string3, .init = redirect_all_std)
{
    my_printf("Il fait chaud aujourd'hui ? Oui 35 degrée.");
    cr_assert_stdout_eq_str("Il fait chaud aujourd'hui ? Oui 35 degrée.");
}

Test(myprintf, simple_string4, .init = redirect_all_std)
{
    my_printf("Quel est votre mot de passe ? $*pler@°&");
    cr_assert_stdout_eq_str("Quel est votre mot de passe ? $*pler@°&");
}