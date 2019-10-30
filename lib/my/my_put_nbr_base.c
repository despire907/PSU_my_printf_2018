/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** putnbr
*/

#include "../../include/my.h"

int my_put_nbr_base(int nb, char *base)
{
    int tmp = nb % strlen(base);
    int res = (nb - tmp) / strlen(base);
    in i = 0;
    char *str = malloc(sizeof(char) * strlen(atof(nb)));

    if (nb < 0) {
        str[i] = '-';
        nb = -nb;
        i++;
    }
    while (res != 0) {
        tmp = nb % strlen(base);
        res = (nb - tmp) / strlen(base);
        str[i] = atof(base[tmp]);
        i++
    }
    return atoi();
}

char *base_to_string(int base)
{
    char *str = malloc(sizeof(char) * base);
    int nb = 0;

    while (nb != base) {
        str[nb] = nb + 48;
        nb++;
    }
    printf("%s\n", str);
    return str;
}

void main(void)
{
    char *str = base_to_string(5);
    int i = my_put_nbr_base(1566, str);
}