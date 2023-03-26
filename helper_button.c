/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** helper_button.c
*/

#include "libmy.h"
#include "struct.h"

void helper_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_helper = sfTexture_createFromFile("helper.png", NULL);
    pen_bt->helper = sfSprite_create();
    pen_bt->pos_helper = (sfVector2f) {500, -20};
    pen_bt->scale_helper = (sfVector2f) {0.1,0.1};
    sfSprite_setTexture(pen_bt->helper, pen_bt->texture_helper, sfTrue);
    sfSprite_setScale(pen_bt->helper, pen_bt->scale_helper);
    sfSprite_setPosition(pen_bt->helper, pen_bt->pos_helper);
}
