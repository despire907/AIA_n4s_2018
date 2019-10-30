/*
** EPITECH PROJECT, 2018
** AIA_n4s_2018
** File description:
** n4s
*/

#ifndef AIA_N4S_2018_MY_H
#define AIA_N4S_2018_MY_H

#include "get_next_line.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct info_s{
    float speed_max;
    float speed_min;
    float forward;
    float backwards;
    float *lidar;
}info_t;

void turn_wheels(float *lidar);
void check_vitesse(float *lidar);
int find_biggest_float(float *lidar);
float *check_float(char *tmp);
void my_putstr(char *str);
char **my_str_to_wordtab(char *str);

#endif //AIA_N4S_2018_MY_H
