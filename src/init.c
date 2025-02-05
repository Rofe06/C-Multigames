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

void init_arrow_menu(game_t *all)
{
    sfVector2f pos_1 = {70, 910};
    sfVector2f pos_2 = {1750, 910};

    all->sprites[1].texture = sfTexture_createFromFile("asset/images/left_arrow.png", NULL);
    all->sprites[1].sprite = sfSprite_create();
    all->sprites[1].rect.top = 0;
    all->sprites[1].rect.left = 0;
    all->sprites[1].rect.width = 100;
    all->sprites[1].rect.height = 100;
    sfSprite_setPosition(all->sprites[1].sprite, pos_1);
    sfSprite_setTexture(all->sprites[1].sprite, all->sprites[1].texture, sfTrue);
    sfSprite_setTextureRect(all->sprites[1].sprite, all->sprites[1].rect);

    all->sprites[2].texture = sfTexture_createFromFile("asset/images/right_arrow.png", NULL);
    all->sprites[2].sprite = sfSprite_create();
    all->sprites[2].rect.top = 0;
    all->sprites[2].rect.left = 0;
    all->sprites[2].rect.width = 100;
    all->sprites[2].rect.height = 100;
    sfSprite_setPosition(all->sprites[2].sprite, pos_2);
    sfSprite_setTexture(all->sprites[2].sprite, all->sprites[2].texture, sfTrue);
    sfSprite_setTextureRect(all->sprites[2].sprite, all->sprites[2].rect);
}

void init_pause_menu(game_t *all)
{
    all->sprites[3].texture = sfTexture_createFromFile("asset/images/pause.png", NULL);
    all->sprites[3].sprite = sfSprite_create();
    sfSprite_setTexture(all->sprites[3].sprite, all->sprites[3].texture, sfTrue);
}

void init_hunter(game_t *all)
{
    all->sprites[4].texture = sfTexture_createFromFile("asset/images/hunter_background.png", NULL);
    all->sprites[4].sprite = sfSprite_create();
    all->sprites[4].rect.top = 0;
    all->sprites[4].rect.left = 0;
    all->sprites[4].rect.width = 1920;
    all->sprites[4].rect.height = 1080;
    sfSprite_setTexture(all->sprites[4].sprite, all->sprites[4].texture, sfTrue);
    sfSprite_setTextureRect(all->sprites[4].sprite, all->sprites[4].rect);

    all->sprites[5].texture = sfTexture_createFromFile("asset/images/cursor.png", NULL);
    all->sprites[5].sprite = sfSprite_create(); 
    sfSprite_setTexture(all->sprites[5].sprite, all->sprites[5].texture, sfTrue);

    sfVector2f scale = {1.4, 1.4};
    all->sprites[6].texture = sfTexture_createFromFile("asset/images/bird.png", NULL);
    all->sprites[6].sprite = sfSprite_create();
    all->sprites[6].rect.top = 0;
    all->sprites[6].rect.left = 0;
    all->sprites[6].rect.width = 100;
    all->sprites[6].rect.height = 140;
    all->sprites[6].params.position.x = 0;
    all->sprites[6].params.position.y = 540;
    all->sprites[6].params.speed = 6;
    all->sprites[6].params.speed_max = 12;
    all->sprites[6].params.acceleration = 2;
    sfSprite_setTexture(all->sprites[6].sprite, all->sprites[6].texture, sfTrue);
    sfSprite_setTextureRect(all->sprites[6].sprite, all->sprites[6].rect);
    sfSprite_setScale(all->sprites[6].sprite, scale);
}

void init_sprites(game_t *all)
{
    all->sprites = malloc(7 * sizeof(sprite_t)); // Valeur a modifier apres chaque ajout de sprite
    init_menu_background(all);
    init_arrow_menu(all);
    init_pause_menu(all);
    init_hunter(all);
}

void init_all(game_t *all)
{
    init_window(all);
    init_sprites(all);
}
