/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Structure
*/

#ifndef STRUCT_H
    #define STRUCT_H

typedef struct window {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfEvent event;
} window_t;

typedef struct sprite {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
} sprite_t;

typedef struct game {
    window_t settings;
    sprite_t *sprites;
} game_t;

#endif /* STRUCT_H_ */
