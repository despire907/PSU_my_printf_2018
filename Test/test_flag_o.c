/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_o1, .init = redirect_all_std)
{
    int i = 23;
    my_printf("hello %o", i);
    cr_assert_stdout_eq_str("hello 27");
}

Test(myprintf, flag_o2, .init = redirect_all_std)
{
    int i = 456;
    my_printf("Et bah ca fait combien 456 ? %o", i);
    cr_assert_stdout_eq_str("Et bah ca fait combien 456 ? 710");
}

Test(myprintf, flag_o3, .init = redirect_all_std)
{
    int i = 2147483647;
    my_printf("Le plus grand %o", i);
    cr_assert_stdout_eq_str("Le plus grand 17777777777");
}

Test(myprintf, flag_o4, .init = redirect_all_std)
{
    int i = 15689;
    my_printf("On prend plus petit c'est bon %o", i);
    cr_assert_stdout_eq_str("On prend plus petit c'est bon 36511");
}

Test(myprintf, flag_o5, .init = redirect_all_std)
{
    int i = 32165987;
    my_printf("trop simple pour mon printf tout ca %o", i);
    cr_assert_stdout_eq_str("trop simple pour mon printf tout ca 172550143");
}