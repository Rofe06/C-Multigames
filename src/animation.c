/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Animation des Sprites
*/

#include "../include/all.h"

void animation(sfIntRect *sprite, int change, int max)
{
    sprite->left += change;
    if (sprite->left == max)
        sprite->left = 0;
}
