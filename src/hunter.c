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

    all->params.is_paused = false;
    sfRenderWindow_setFramerateLimit(WIN, 120);
    //game_music(all);

    while (sfRenderWindow_isOpen(WIN)) {
        if (!all->params.is_paused) {
            hunter_animation(all, clock);
            position(all);
            sfRenderWindow_clear(WIN, sfBlack);
            sfRenderWindow_drawSprite(WIN, all->sprites[4].sprite, NULL);
            sfRenderWindow_drawSprite(WIN, all->sprites[6].sprite, NULL);
            cursor(all);
            hunter_events(all);
        } else {
            sfRenderWindow_setMouseCursorVisible(WIN, sfTrue);
            sfRenderWindow_drawSprite(WIN, all->sprites[3].sprite, NULL);
            pause_events(all);
        }
        sfRenderWindow_display(WIN);
    }
    sfClock_destroy(clock);
}

void hunter_animation(game_t *all, sfClock *clock)
{
    sfIntRect *background = &all->sprites[4].rect;
    sfIntRect *bird = &all->sprites[6].rect;
    sfTime temps = sfClock_getElapsedTime(clock);
    float seconds = temps.microseconds / 100000.0;

    if (seconds > 1) {
        animation(background, 1920, 15360);
        animation(bird, 100, 400);
        sfSprite_setTextureRect(all->sprites[4].sprite, *background);
        sfSprite_setTextureRect(all->sprites[6].sprite, *bird);
        sfClock_restart(clock);
    }
}

void check_hitbox(game_t *all)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WIN);

    all->sprites->hitbox = sfSprite_getGlobalBounds(all->sprites[6].sprite);
    if (sfFloatRect_contains(&all->sprites->hitbox, mouse_pos.x, mouse_pos.y)) {
        //shoot_sound();
        reset_pos(all);
    } else {
        
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
    sfSprite_setPosition(all->sprites[5].sprite, cursorsp_pos);
    sfRenderWindow_drawSprite(WIN, all->sprites[5].sprite, NULL);
}
