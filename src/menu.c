/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** File for all the in game menu
*/

#include "../include/all.h"

void main_menu(game_t *all)
{
    sfClock *clock = sfClock_create();

    while (sfRenderWindow_isOpen(WIN)) {
        menu_animation(all, clock);
        sfRenderWindow_clear(WIN, sfBlack);
        sfRenderWindow_drawSprite(WIN, all->sprites[0].sprite, NULL);
        sfRenderWindow_drawSprite(WIN, all->sprites[1].sprite, NULL);
        sfRenderWindow_drawSprite(WIN, all->sprites[2].sprite, NULL);
        sfRenderWindow_display(WIN);
        main_menu_events(all);
    }
    sfRenderWindow_destroy(WIN);
    sfClock_destroy(clock);
}

void menu_animation(game_t *all, sfClock *clock)
{
    sfIntRect *arrow_left = &all->sprites[1].rect;
    sfIntRect *arrow_right = &all->sprites[2].rect;
    sfTime temps = sfClock_getElapsedTime(clock);
    float seconds = temps.microseconds / 300000.0;

    if (seconds > 1) {
        animation(arrow_left, 100, 200);
        animation(arrow_right, 100, 200);
        sfSprite_setTextureRect(all->sprites[1].sprite, *arrow_left);
        sfSprite_setTextureRect(all->sprites[2].sprite, *arrow_right);
        sfClock_restart(clock);
    }
}
