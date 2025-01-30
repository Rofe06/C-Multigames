/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** File for all the in game menu
*/

#include "../include/all.h"

void main_menu(game_t *all)
{
    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_clear(WIN, sfBlack);
        sfRenderWindow_drawSprite(WIN, all->sprites[0].sprite, NULL);
        sfRenderWindow_display(WIN);
        main_menu_events(all);
    }
    sfRenderWindow_destroy(WIN);
}
