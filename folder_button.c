/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** folder_button.c
*/

#include "libmy.h"
#include "struct.h"

void folder_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_folder = sfTexture_createFromFile("folder.png", NULL);
    pen_bt->folder = sfSprite_create();
    pen_bt->pos_folder = (sfVector2f) {50, -20};
    pen_bt->scale_folder = (sfVector2f) {0.5,0.5};
    sfSprite_setTexture(pen_bt->folder, pen_bt->texture_folder, sfTrue);
    sfSprite_setScale(pen_bt->folder, pen_bt->scale_folder);
    sfSprite_setPosition(pen_bt->folder, pen_bt->pos_folder);
}
