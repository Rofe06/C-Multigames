/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Initiation for everything
*/

#include "../include/all.h"

void init_window(game_t *all)
{
    MODE.bitsPerPixel = 32;
    MODE.height = 1080;
    MODE.width = 1920;
    WIN = sfRenderWindow_create(MODE, "Multigames", sfDefaultStyle, NULL);
}

void init_menu_background(game_t *all)
{
    all->sprites[0].texture = sfTexture_createFromFile("asset/images/main_menu.png", NULL);
    all->sprites[0].sprite = sfSprite_create();
    sfSprite_setTexture(all->sprites[0].sprite, all->sprites[0].texture, sfTrue);
}

void init_hunter(game_t *all)
{
    all->sprites[1].texture = sfTexture_createFromFile("asset/images/hunter_background.png", NULL);
    all->sprites[1].sprite = sfSprite_create();
    all->sprites[1].rect.top = 0;
    all->sprites[1].rect.left = 0;
    all->sprites[1].rect.width = 1920;
    all->sprites[1].rect.height = 1080;
    sfSprite_setTexture(all->sprites[1].sprite, all->sprites[1].texture, sfTrue);
    sfSprite_setTextureRect(all->sprites[1].sprite, all->sprites[1].rect);
}

void init_sprites(game_t *all)
{
    all->sprites = malloc(2 * sizeof(sprite_t)); // Valeur a modifier apres chaque ajout de sprite
    init_menu_background(all);
    init_hunter(all);
}

void init_all(game_t *all)
{
    init_window(all);
    init_sprites(all);
}
