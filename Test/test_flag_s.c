/*
** EPITECH PROJECT, 2018
** test1.c
** File description:
** ...
*/

#include "../include/my.h"

Test(myprintf, flag_s1, .init = redirect_all_std)
{
    char *s = "Mr Delomenie";
    my_printf("Bonjour %s", s);
    cr_assert_stdout_eq_str("Bonjour Mr Delomenie");
}

Test(myprintf, flag_s2, .init = redirect_all_std)
{
    char *s = "j'ai 19 ans";
    my_printf("Bonjour %s", s);
    cr_assert_stdout_eq_str("Bonjour j'ai 19 ans");
}

Test(myprintf, flag_s3, .init = redirect_all_std)
{
    my_printf("%s %s %s %s", "Bonjour", "j'ai", "19", "ans");
    cr_assert_stdout_eq_str("Bonjour j'ai 19 ans");
}

Test(myprintf, flag_s4, .init = redirect_all_std)
{
    char *s = "inch";
    my_printf("Es que sa marche ? %s", s);
    cr_assert_stdout_eq_str("Es que sa marche ? inch");
}

Test(myprintf, flag_s5, .init = redirect_all_std)
{
    char *s = "Tests criterions";
    my_printf("C'est vraiment trop bien les %s", s);
    cr_assert_stdout_eq_str("C'est vraiment trop bien les Tests criterions");
}