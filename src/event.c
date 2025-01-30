/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Managing Event
*/

#include "../include/all.h"

void main_menu_events(game_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WIN);

    while (sfRenderWindow_pollEvent(WIN, &EVENT)) {
        if (EVENT.type == sfEvtClosed) {
            sfRenderWindow_close(WIN);
            clean_all(all);
        }
        if (mouse.x >= 1674 && mouse.x <= 1920 && mouse.y >= 153 && mouse.y <= 413 && EVENT.type == sfEvtMouseButtonPressed) {
            hunter_screen(all);
            sfRenderWindow_close(WIN);
            clean_all(all);
        }
        if (mouse.x >= 1272 && mouse.x <= 1454 && mouse.y >= 606 && mouse.y <= 729 && EVENT.type == sfEvtMouseButtonPressed) {
            printf("Karting\n");
            sfRenderWindow_close(WIN);
            clean_all(all);
        }
    }
}

void hunter_events(game_t *all)
{
    while (sfRenderWindow_pollEvent(WIN, &EVENT)) {
        if (EVENT.type == sfEvtClosed) {
            sfRenderWindow_close(WIN);
            clean_all(all);
        }
    }
}
