/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** init_file.c
*/

#include "libmy.h"
#include "struct.h"

void reel_helper_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_helper_bt = sfTexture_createFromFile("hekper.png", NULL);
    pen_bt->helper_bt = sfSprite_create();
    pen_bt->pos_helper_bt = (sfVector2f) {300, 200};
    pen_bt->scale_helper_bt = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->helper_bt, pen_bt->texture_helper_bt, sfTrue);
    sfSprite_setScale(pen_bt->helper_bt, pen_bt->scale_helper_bt);
    sfSprite_setPosition(pen_bt->helper_bt, pen_bt->pos_helper_bt);
}

void new_file_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_new_file = sfTexture_createFromFile("new_file.png", NULL);
    pen_bt->new_file = sfSprite_create();
    pen_bt->pos_new_file = (sfVector2f) {620, 0};
    pen_bt->scale_new_file = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->new_file, pen_bt->texture_new_file, sfTrue);
    sfSprite_setScale(pen_bt->new_file, pen_bt->scale_new_file);
    sfSprite_setPosition(pen_bt->new_file, pen_bt->pos_new_file);
}

void save_file_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_save_file = sfTexture_createFromFile("save_file.png", NULL);
    pen_bt->save_file = sfSprite_create();
    pen_bt->pos_save_file = (sfVector2f) {750, 0};
    pen_bt->scale_save_file = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->save_file, pen_bt->texture_save_file, sfTrue);
    sfSprite_setScale(pen_bt->save_file, pen_bt->scale_save_file);
    sfSprite_setPosition(pen_bt->save_file, pen_bt->pos_save_file);
}

void open_file_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_open_file = sfTexture_createFromFile("open_file.png", NULL);
    pen_bt->open_file = sfSprite_create();
    pen_bt->pos_open_file = (sfVector2f) {880, 0};
    pen_bt->scale_open_file = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->open_file, pen_bt->texture_open_file, sfTrue);
    sfSprite_setScale(pen_bt->open_file, pen_bt->scale_open_file);
    sfSprite_setPosition(pen_bt->open_file, pen_bt->pos_open_file);
}
