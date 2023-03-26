/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_size_pen.c
*/

#include "libmy.h"
#include "struct.h"

void rescale_touch_size_pen(pen_bouton_t *pen_bt)
{
    if (pen_bt->touch_size_pen == 1) {
        sfSprite_setScale(pen_bt->size_1, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_2, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_3, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_4, pen_bt->reel_scale_size_4);
    }

    if (pen_bt->touch_size_pen == 0) {
        sfSprite_setScale(pen_bt->size_1, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_2, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_3, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_4, pen_bt->invisibility_scale);
    }
}

void cond1_for_change_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_size_pen == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 30
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 6;
        pen_bt->touch_size_pen = 0;
    }

    if (pen_bt->touch_size_pen == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 30 && st->event.mouseButton.y < 59
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 15;
        pen_bt->touch_size_pen = 0;
    }
}

void cond2_for_change_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_size_pen == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 60 && st->event.mouseButton.y < 95
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 25;
        pen_bt->touch_size_pen = 0;
    }

    if (pen_bt->touch_size_pen == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 96 && st->event.mouseButton.y < 130
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 36;
        pen_bt->touch_size_pen = 0;
    }
}

void touch_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    rescale_touch_size_pen(pen_bt);

    cond1_for_change_size_pen(pen_bt, st, dw);

    cond2_for_change_size_pen(pen_bt, st, dw);
}
