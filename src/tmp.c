/*
** EPITECH PROJECT, 2018
** AIA_n4s_2018
** File description:
** n4s
*/

#include "my.h"
#include <stdio.h>

void check_vitesse(float *lidar)
{
    float vitesse = 0;

    vitesse = (1.0 * (((lidar[16] + lidar[17]) / 2)) / 3010.0);
    dprintf(1, "CAR_FORWARD:%0.1f\n", vitesse)
    get_next_line(0);
}
