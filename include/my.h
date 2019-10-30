/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

#include <stdarg.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>

#ifndef MY_H
#define MY_H

void my_u(char const *s, int i, va_list ap);
void my_su(char const *s, int i, va_list ap);
void my_p(char const *s, int i, va_list ap);
void my_id(char const *s, int i, va_list ap);
void my_c(char const *s, int i, va_list ap);
void my_s(char const *s, int i, va_list ap);
void my_pours(char const *s, int i, va_list ap);
void my_x(char const *s, int i, va_list ap);
void my_xu(char const *s, int i, va_list ap);
void my_o(char const *s, int i, va_list ap);
void my_b(char const *s, int i, va_list ap);
int my_put_nbr_base_unsigned(unsigned int nb, char *base);
int my_put_nbr_base(int nb, char *base);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr_base_long(long int nb, char *base);
void my_put_str_printable_only(char const *s);
void redirect_all_std(void);
int my_printf(char const *s, ...);

#endif
