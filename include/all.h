/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Include to Script
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <SFML/Window/Event.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window/Mouse.h>

#include "struct.h"

#ifndef INCLUDED_ALL_H
    #define INCLUDED_ALL_H

// Main
int main(int argc, char **argv);

// Help
void help(int argc, char *langage);
void header(void);
void check_language(char *langage);
    // Language 
    void french(void);
    void english(void);
    void spanish(void);

// Init
void init_all(game_t *all);
void init_sprites(game_t *all);
void init_window(game_t *all);
void init_menu_background(game_t *all);
void init_pause_menu(game_t *all);

// Menu
void main_menu(game_t *all);

// Events
void main_menu_events(game_t *all);
void hunter_events(game_t *all);
void pause_events(game_t *all);

// Animation
void animation(sfIntRect *sprite, int change, int max);
void position(game_t *all);
void reset_pos(game_t *all);

// Hunter
void hunter_screen(game_t *all);
void background_hunter_animation(game_t *all, sfClock *clock);
void cursor(game_t *all);

// Clean & Free
void clean_all(game_t *all);

#endif
