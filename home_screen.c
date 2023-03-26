/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** home_screen.c
*/

#include "libmy.h"
#include "struct.h"

void home_screen(pen_bouton_t *pen_bt)
{
    pen_bt->texture_home_screen = sfTexture_createFromFile("prin_screen.jpg",
                                                            NULL);
    pen_bt->home_screen = sfSprite_create();
    pen_bt->pos_home_screen = (sfVector2f) {0, 0};
    pen_bt->scale_home_screen = (sfVector2f) {5,5};
    sfSprite_setTexture(pen_bt->home_screen, pen_bt->texture_home_screen,
                        sfTrue);
    sfSprite_setScale(pen_bt->home_screen, pen_bt->scale_home_screen);
    sfSprite_setPosition(pen_bt->home_screen, pen_bt->pos_home_screen);
}

void start(pen_bouton_t *pen_bt)
{
    pen_bt->texture_start = sfTexture_createFromFile("start.png", NULL);
    pen_bt->start = sfSprite_create();
    pen_bt->pos_start = (sfVector2f) {700, 300};
    pen_bt->scale_start = (sfVector2f) {1,1};
    sfSprite_setTexture(pen_bt->start, pen_bt->texture_start, sfTrue);
    sfSprite_setScale(pen_bt->start, pen_bt->scale_start);
    sfSprite_setPosition(pen_bt->start, pen_bt->pos_start);
}
