/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** size_pen_button.c
*/

#include "libmy.h"
#include "struct.h"

void size_reel_brosh_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_brosh = sfTexture_createFromFile("size_brosh.png",
    NULL);
    pen_bt->size_brosh = sfSprite_create();
    pen_bt->pos_size_brosh = (sfVector2f) {1000, 10};
    pen_bt->scale_size_brosh = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_brosh, pen_bt->texture_size_brosh, sfTrue);
    sfSprite_setScale(pen_bt->size_brosh, pen_bt->scale_size_brosh);
    sfSprite_setPosition(pen_bt->size_brosh, pen_bt->pos_size_brosh);
}

void size_reel_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_pen = sfTexture_createFromFile("size.png", NULL);
    pen_bt->size_pen = sfSprite_create();
    pen_bt->pos_size_pen = (sfVector2f) {1000, 20};
    pen_bt->scale_size_pen = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_pen, pen_bt->texture_size_pen, sfTrue);
    sfSprite_setScale(pen_bt->size_pen, pen_bt->scale_size_pen);
    sfSprite_setPosition(pen_bt->size_pen, pen_bt->pos_size_pen);
}

void size_brosh_button(pen_bouton_t *pen_bt)
{
    size_reel_brosh_button(pen_bt);
    size1_brosh_button(pen_bt);
    size2_brosh_button(pen_bt);
    size3_brosh_button(pen_bt);
    size4_brosh_button(pen_bt);
}

void size_button(pen_bouton_t *pen_bt)
{
    size_reel_button(pen_bt);
    size1_button(pen_bt);
    size2_button(pen_bt);
    size3_button(pen_bt);
    size4_button(pen_bt);
}
