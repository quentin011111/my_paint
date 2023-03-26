/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** list_of_draw.c
*/

#include "libmy.h"
#include "struct.h"


void draw_file(pen_bouton_t *p_bt, setting_t *st)
{
    sfRenderWindow_drawSprite(st->window, p_bt->new_file, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->save_file, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->open_file, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->folder, NULL);
}

void draw_pen(pen_bouton_t *p_bt, setting_t *st)
{
    sfRenderWindow_drawSprite(st->window, p_bt->size_pen, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->pen_button, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_1, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_2, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_3, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_4, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->color_option, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->color_pen, NULL);
}

void draw_brosh(pen_bouton_t *p_bt, setting_t *st)
{
    sfRenderWindow_drawSprite(st->window, p_bt->size_brosh, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->brosh, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_brosh_1, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_brosh_2, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_brosh_3, NULL);
    sfRenderWindow_drawSprite(st->window, p_bt->size_brosh_4, NULL);
}
