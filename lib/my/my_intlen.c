/*
** EPITECH PROJECT, 2020
** tests codes
** File description:
** my_intlen
*/

int my_intlen(int nbr)
{
    int res = 0;

    if (nbr == 0)
        return (1);
    if (nbr < 0) {
        nbr = nbr * -1;
        res += 1;
    }
    while (nbr > 0) {
        nbr = nbr / 10;
        res += 1;
    }
    return (res);
}

int my_unsigned_int_len(unsigned int nbr)
{
    unsigned int res = 0;

    while (nbr > 0) {
        nbr = nbr / 10;
        res += 1;
    }
    return (res);
}