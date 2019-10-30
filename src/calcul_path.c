/*
** EPITECH PROJECT, 2018
** AIA_n4s_2018
** File description:
** n4s
*/

#include "my.h"

int find_last_biggest_float(float *lidar)
{
    int i = 1;
    float save = 0;
    int count = 0;

    save = lidar[0];
    while (lidar[i]) {
        if (lidar[i] > save) {
            save = lidar[i];
            count++;
        } else if (lidar[i] == save)
            count++;
        i++;
    }
    return count;
}

int find_biggest_float(float *lidar)
{
    int i = 0;
    int count = 0;
    int j = find_last_biggest_float(lidar) - 1;
    float save = lidar[j];

    while (lidar[i] != save) {
        count++;
        i++;
    }
    return count;
}

void print_wheels(float tmp)
{
    dprintf(1, "WHEELS_DIR:%f\n", tmp);
    get_next_line(0);
}

void turn_wheels(float *lidar)
{
    int check = find_biggest_float(lidar);
    int biggest_float = find_last_biggest_float(lidar);
    float midle = (float)((biggest_float - check) / 2) + check;
    float tmp = 0.0;
    float save = 0.0;

    midle = midle - 16;
    midle = midle / 16;
    midle = midle * (-1);
    if (lidar[0] < 150 || lidar[31] < 150) {
        tmp = (lidar[0] < 150) ? -0.33 : 0.33;
        print_wheels(tmp);
    } if (midle < -0.5) {
        tmp = midle - 0.36;
        save = midle + 0.6;
    } else if (midle > 0.5) {
        tmp = midle + 0.36;
        save = midle - 0.6;
    }
    print_wheels(tmp);
    print_wheels(save);
}

