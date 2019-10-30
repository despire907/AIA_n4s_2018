/*
** EPITECH PROJECT, 2018
** AIA_n4s_2018
** File description:
** n4s
*/

#include "my.h"
#include <stdio.h>
#include <string.h>

int my_strsize(char *str, int coord)
{
    while (str[coord] != ':')
        coord++;
    return coord;
}

float *check_float(char *tmp)
{
    float *lidar = malloc(sizeof(float)* 32);
    char **save = my_str_to_wordtab(tmp);
    int i = 3;
    int h = 0;

    if (lidar == NULL)
        return NULL;
    while (h < 32) {
        lidar[h] = atof(save[i]);
        h++;
        i++;
    }
    return lidar;
}

float *check_lidar(void)
{
    float *info;
    char *return_of_lidar = NULL;

    dprintf(1, "GET_INFO_LIDAR\n");
    usleep(500);
    return_of_lidar = get_next_line(0);
    info = check_float(return_of_lidar);
    return info;
}

int lopp_ai(void)
{
    float *info;

    while (1) {
        usleep(300);
        info = check_lidar();
        check_vitesse(info);
        usleep(100);
        turn_wheels(info);
    }
    return 0;
}

int main(void)
{
    usleep(300);
    dprintf(1, "START_SIMULATION\n");
    get_next_line(0);
    lopp_ai();
    usleep(300);
    dprintf(1, "STOP_SIMULATION\n");
    return 0;
}
