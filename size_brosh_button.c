/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** size_brosh_button.c
*/

#include "libmy.h"
#include "struct.h"

void size1_brosh_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_brosh_1 = sfTexture_createFromFile("un.png", NULL);
    pen_bt->size_brosh_1 = sfSprite_create();
    pen_bt->pos_size_brosh_1 = (sfVector2f) {1130, 0};
    pen_bt->scale_size_brosh1 = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_brosh_1,
                        pen_bt->texture_size_brosh_1, sfTrue);
    sfSprite_setScale(pen_bt->size_brosh_1, pen_bt->scale_size_brosh1);
    sfSprite_setPosition(pen_bt->size_brosh_1, pen_bt->pos_size_brosh_1);
}

void size2_brosh_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_brosh_2 = sfTexture_createFromFile("deux.png", NULL);
    pen_bt->size_brosh_2 = sfSprite_create();
    pen_bt->pos_size_brosh_2 = (sfVector2f) {1130, 30};
    pen_bt->scale_size_brosh_2 = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_brosh_2,
                        pen_bt->texture_size_brosh_2, sfTrue);
    sfSprite_setScale(pen_bt->size_brosh_2, pen_bt->scale_size_brosh_2);
    sfSprite_setPosition(pen_bt->size_brosh_2, pen_bt->pos_size_brosh_2);
}

void size3_brosh_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_brosh_3 = sfTexture_createFromFile("troix.png", NULL);
    pen_bt->size_brosh_3 = sfSprite_create();
    pen_bt->pos_size_brosh_3 = (sfVector2f) {1120, 50};
    pen_bt->scale_size_brosh_3 = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_brosh_3,
                        pen_bt->texture_size_brosh_3, sfTrue);
    sfSprite_setScale(pen_bt->size_brosh_3, pen_bt->scale_size_brosh_3);
    sfSprite_setPosition(pen_bt->size_brosh_3, pen_bt->pos_size_brosh_3);
}

void size4_brosh_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_size_brosh_4 = sfTexture_createFromFile("quatre.png", NULL);
    pen_bt->size_brosh_4 = sfSprite_create();
    pen_bt->pos_size_brosh_4 = (sfVector2f) {1120, 90};
    pen_bt->scale_size_brosh_4 = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->size_brosh_4,
                        pen_bt->texture_size_brosh_4, sfTrue);
    sfSprite_setScale(pen_bt->size_brosh_4, pen_bt->scale_size_brosh_4);
    sfSprite_setPosition(pen_bt->size_brosh_4, pen_bt->pos_size_brosh_4);
}
