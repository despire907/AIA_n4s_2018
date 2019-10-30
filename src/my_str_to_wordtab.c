/*
** EPITECH PROJECT, 2018
** fs_open_file
** File description:
** CPE_BSQ_bootstrap_2018
*/

#include "my.h"

int word_len(char *str, int i)
{
    int count = 0;

    while (str[i] && str[i] != ':') {
        count++;
        i++;
    }
    return count;
}

int word_count(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i]) {
        if (str[i] == ':')
            count++;
        i++;
    }
    return count;
}

char **my_str_to_wordtab(char *str)
{
    char **tab;
    int i = 0;
    int j = 0;
    int k = 0;

    tab = malloc(sizeof(char *) *(word_count(str) + 1));
    while (str[i]) {
        k = 0;
        tab[j] = malloc(sizeof(char) * (word_len(str, i) + 1));
        while (str[i] && str[i] != ':')
            tab[j][k++] = str[i++];
        while (str[i] == ':')
            i++;
        tab[j][k] = '\0';
        j++;
    }
    tab[j] = '\0';
    return (tab);
}
