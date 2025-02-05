/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Clean and Free
*/

#include "../include/all.h"

void check_sprite(game_t *all)
{
    if (all->sprites) {
        free(all->sprites);
        all->sprites = NULL;
    }
}

void clean_all(game_t *all)
{
    for (int i = 0; i < 7; i++) { // Valeur a modifier apres chaque ajout de sprite
        if (all->sprites && all->sprites[i].sprite)
            sfSprite_destroy(all->sprites[i].sprite);
        if (all->sprites && all->sprites[i].texture)
            sfTexture_destroy(all->sprites[i].texture);
    }
    check_sprite(all);
}
