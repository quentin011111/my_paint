/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** destroy.c
*/

#include "libmy.h"
#include "struct.h"

void destroy_brosh(pen_bouton_t *pen_bouton)
{
    sfSprite_destroy(pen_bouton->brosh);
    sfSprite_destroy(pen_bouton->size_brosh);
    sfSprite_destroy(pen_bouton->size_brosh_1);
    sfSprite_destroy(pen_bouton->size_brosh_2);
    sfSprite_destroy(pen_bouton->size_brosh_3);
    sfSprite_destroy(pen_bouton->size_brosh_4);
    sfTexture_destroy(pen_bouton->texture_brosh);
    sfTexture_destroy(pen_bouton->texture_size_brosh);
    sfTexture_destroy(pen_bouton->texture_size_brosh_1);
    sfTexture_destroy(pen_bouton->texture_size_brosh_2);
    sfTexture_destroy(pen_bouton->texture_size_brosh_3);
    sfTexture_destroy(pen_bouton->texture_size_brosh_4);
}

void destroy_pen(pen_bouton_t *pen_bouton)
{
    sfSprite_destroy(pen_bouton->color_option);
    sfSprite_destroy(pen_bouton->color_pen);
    sfSprite_destroy(pen_bouton->size_1);
    sfSprite_destroy(pen_bouton->size_2);
    sfSprite_destroy(pen_bouton->size_3);
    sfSprite_destroy(pen_bouton->size_4);
    sfTexture_destroy(pen_bouton->texture_pen_button);
    sfTexture_destroy(pen_bouton->texture_color_option);
    sfTexture_destroy(pen_bouton->texture_color_pen);
    sfTexture_destroy(pen_bouton->texture_size_1);
    sfTexture_destroy(pen_bouton->texture_size_2);
    sfTexture_destroy(pen_bouton->texture_size_3);
    sfTexture_destroy(pen_bouton->texture_size_4);
    sfTexture_destroy(pen_bouton->texture_size_pen);
}

void destroy_other_button(pen_bouton_t *pen_bouton)
{
    sfSprite_destroy(pen_bouton->edit);
    sfSprite_destroy(pen_bouton->folder);
    sfSprite_destroy(pen_bouton->helper);
    sfSprite_destroy(pen_bouton->helper_bt);
    sfSprite_destroy(pen_bouton->home_screen);
    sfSprite_destroy(pen_bouton->new_file);
    sfSprite_destroy(pen_bouton->open_file);
    sfSprite_destroy(pen_bouton->start);
    sfTexture_destroy(pen_bouton->texture_edit);
    sfTexture_destroy(pen_bouton->texture_folder);
    sfTexture_destroy(pen_bouton->texture_helper);
    sfTexture_destroy(pen_bouton->texture_helper_bt);
    sfTexture_destroy(pen_bouton->texture_home_screen);
    sfTexture_destroy(pen_bouton->texture_new_file);
    sfTexture_destroy(pen_bouton->texture_open_file);
    sfTexture_destroy(pen_bouton->texture_save_file);
    sfTexture_destroy(pen_bouton->texture_start);
}

void destroy(pen_bouton_t *pen_bt, draw_t *dw, setting_t *st)
{
    destroy_brosh(pen_bt);
    destroy_pen(pen_bt);
    destroy_other_button(pen_bt);
    sfSprite_destroy(dw->sprite);
    sfTexture_destroy(dw->texture);
    sfRenderWindow_destroy(st->window);
}
