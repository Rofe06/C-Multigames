/*
** Multigames PROJECT, 2025
** [rofe.]
** File description:
** Help File
*/

#include "../include/all.h"

void help(int argc, char *langage)
{
    if (argc == 3) {
        header();
        check_language(langage);
        //help_sound();
    } else if (argc == 2) {
        header();
        english();
        //help_sound();
    } else {
        header();
        english();
        printf("\nYour selected langage isn't available yet\n");
        //help_sound();
    }
}

void check_language(char *langage)
{
    if (strcmp(langage, "en") == 0)
        english();
    if (strcmp(langage, "es") == 0)
        spanish();
    if (strcmp(langage, "fr") == 0)
        french();
}

void header(void)
{
    printf("╔╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╤╗\n");
    printf("╟┼┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┴┼╢\n");
    printf("╟┤░█▄█░█░█░█░░░▀█▀░▀█▀░█▀▀░█▀█░█▄█░█▀▀░█▀▀├╢\n");
    printf("╟┤░█░█░█░█░█░░░░█░░░█░░█░█░█▀█░█░█░█▀▀░▀▀█├╢\n");
    printf("╟┤░▀░▀░▀▀▀░▀▀▀░░▀░░▀▀▀░▀▀▀░▀░▀░▀░▀░▀▀▀░▀▀▀├╢\n");
    printf("╟┼┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┬┼╢\n");
    printf("╚╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╝\n");
}
