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
        if (mouse.x >= 1370 && mouse.x <= 1438 && mouse.y >= 918 && mouse.y <= 983 && EVENT.type == sfEvtMouseButtonPressed) {
            printf("Crédit:\n");
            printf("\t\t[rofe.]\n");
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
        if (EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyEscape)
            all->params.is_paused = !all->params.is_paused;
        if (EVENT.type == sfEvtMouseButtonPressed)
            check_hitbox(all);
    }
}

void pause_events(game_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WIN);

    while (sfRenderWindow_pollEvent(WIN, &EVENT)) {
        if ((EVENT.type == sfEvtClosed) || (mouse.x >= 407 && mouse.x <= 972 && mouse.y >= 756 && mouse.y <= 856 && EVENT.type == sfEvtMouseButtonPressed)) {
            sfRenderWindow_close(WIN);
            clean_all(all);
        }
        if ((EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyEscape) || (mouse.x >= 173 && mouse.x <= 618 && mouse.y >= 334 && mouse.y <= 444 && EVENT.type == sfEvtMouseButtonPressed))
            all->params.is_paused = !all->params.is_paused;
    }
}
