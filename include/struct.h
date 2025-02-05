/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Structure
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #define WIN all->settings.window
    #define MODE all->settings.mode
    #define EVENT all->settings.event

typedef struct window {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfEvent event;
} window_t;

typedef struct params {
    bool is_paused;
} params_t;

typedef struct sprite_params {
    sfVector2f position;
    int speed;
    int speed_max;
    int acceleration;
} sprite_params_t;

typedef struct sprite {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfFloatRect hitbox;
    sprite_params_t params;
} sprite_t;

typedef struct game {
    window_t settings;
    params_t params;
    sprite_t *sprites;
} game_t;

#endif /* STRUCT_H_ */
