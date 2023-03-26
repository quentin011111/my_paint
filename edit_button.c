/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** edit_button.c
*/


#include "libmy.h"
#include "struct.h"

void edit_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_edit = sfTexture_createFromFile("édition.png", NULL);
    pen_bt->edit = sfSprite_create();
    pen_bt->pos_edit = (sfVector2f) {270, 0};
    pen_bt->scale_edit = (sfVector2f) {0.3,0.3};
    sfSprite_setTexture(pen_bt->edit, pen_bt->texture_edit, sfTrue);
    sfSprite_setScale(pen_bt->edit, pen_bt->scale_edit);
    sfSprite_setPosition(pen_bt->edit, pen_bt->pos_edit);
}

void pen_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_pen_button = sfTexture_createFromFile("pen.png", NULL);
    pen_bt->pen_button = sfSprite_create();
    pen_bt->pos_pen_button = (sfVector2f) {400, -5};
    pen_bt->scale_pen_button = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->pen_button, pen_bt->texture_pen_button, sfTrue);
    sfSprite_setScale(pen_bt->pen_button, pen_bt->scale_pen_button);
    sfSprite_setPosition(pen_bt->pen_button, pen_bt->pos_pen_button);
}

void gomme_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_brosh = sfTexture_createFromFile("gomme.png", NULL);
    pen_bt->brosh = sfSprite_create();
    pen_bt->pos_brosh = (sfVector2f) {415, 75};
    pen_bt->scale_brosh = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->brosh, pen_bt->texture_brosh, sfTrue);
    sfSprite_setScale(pen_bt->brosh, pen_bt->scale_brosh);
    sfSprite_setPosition(pen_bt->brosh, pen_bt->pos_brosh);
}
