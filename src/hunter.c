/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Hunter Minigame
*/

#include "../include/all.h"

void hunter_screen(game_t *all)
{
    sfClock *clock = sfClock_create();
    sfIntRect *sprites_bg = &all->sprites[1].rect;

    sfRenderWindow_setFramerateLimit(WIN, 120);
    //game_music(all);

    while (sfRenderWindow_isOpen(WIN)) {
        background_hunter_animation(all, sprites_bg, clock);
        //bird_animation(all, sprites, clock);
        //position(all);
        sfRenderWindow_clear(WIN, sfBlack);
        sfRenderWindow_drawSprite(WIN, all->sprites[1].sprite, NULL);
        cursor(all);
        sfRenderWindow_display(WIN);
        hunter_events(all);
    }
    sfClock_destroy(clock);
}

void background_hunter_animation(game_t *all, sfIntRect *sprites, sfClock *clock)
{
    sfTime temps = sfClock_getElapsedTime(clock);
    float seconds = temps.microseconds / 100000.0;

    if (seconds > 1) {
        animation(sprites, 1920, 15360);
        sfSprite_setTextureRect(all->sprites[1].sprite, *sprites);
        sfClock_restart(clock);
    }
}

void cursor(game_t *all)
{
    int x = 60;
    int y = 60;
    sfVector2f cursorsp_pos;

    sfRenderWindow_setMouseCursorVisible(WIN, sfFalse);
    cursorsp_pos.x = sfMouse_getPositionRenderWindow(WIN).x - x;
    cursorsp_pos.y = sfMouse_getPositionRenderWindow(WIN).y - y;
    sfSprite_setPosition(all->sprites[2].sprite, cursorsp_pos);
    sfRenderWindow_drawSprite(WIN, all->sprites[2].sprite, NULL);
}
