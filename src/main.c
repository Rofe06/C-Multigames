/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Main file of the project
*/

#include "../include/all.h"

int main(int argc, char **argv)
{
    game_t all;

    if (argc >= 2) {
        if (strcmp(argv[1], "-h") == 0)
            help(argc, argv[2]);
    } else {
        init_all(&all);
        main_menu(&all);
    }
    return 0;
}
