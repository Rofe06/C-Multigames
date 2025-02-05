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

void position(game_t *all)
{
    sfVector2f position = {all->sprites[6].params.position.x, all->sprites[6].params.position.y};

    all->sprites[6].params.position.x += all->sprites[6].params.speed;
    if (all->sprites[6].params.position.x > 1920) {
        reset_pos(all);
    }
    sfSprite_setPosition(all->sprites[6].sprite, position);
}

void reset_pos(game_t *all)
{
    int nbgen = rand() % 900 + 10;

    all->sprites[6].params.position.x = -250;
    all->sprites[6].params.position.y = nbgen;
    if (all->sprites[6].params.speed != all->sprites[6].params.speed_max)
        all->sprites[6].params.speed += all->sprites[6].params.acceleration;
}
