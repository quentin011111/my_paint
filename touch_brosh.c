/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_brosh.c
*/

#include "libmy.h"
#include "struct.h"

void condi1_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_size_brosh == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 30
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 6;
        pen_bt->touch_size_brosh = 0;
    }
    if (pen_bt->touch_size_brosh == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 30 && st->event.mouseButton.y < 59
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 20;
        pen_bt->touch_size_brosh = 0;
    }
}

void condi2_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_size_brosh == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 60 && st->event.mouseButton.y < 95
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 30;
        pen_bt->touch_size_brosh = 0;
    }
    if (pen_bt->touch_size_brosh == 1 && st->event.mouseButton.x > 1110
    && st->event.mouseButton.x < 1155
    && st->event.mouseButton.y > 96 && st->event.mouseButton.y < 130
    && st->event.type == sfEvtMouseButtonPressed) {
        dw->size = 40;
        pen_bt->touch_size_brosh = 0;
    }
}

void rescale_touch_size_brosh(pen_bouton_t *pen_bt)
{
    if (pen_bt->touch_size_brosh == 1) {
        sfSprite_setScale(pen_bt->size_brosh_1, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_brosh_2, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_brosh_3, pen_bt->reel_scale_size_nb);
        sfSprite_setScale(pen_bt->size_brosh_4, pen_bt->reel_scale_size_4);
    }
    if (pen_bt->touch_size_brosh == 0) {
        sfSprite_setScale(pen_bt->size_brosh_1, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_brosh_2, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_brosh_3, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->size_brosh_4, pen_bt->invisibility_scale);
    }
}

void touch_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    rescale_touch_size_brosh(pen_bt);
    condi1_size_brosh(pen_bt, st, dw);
    condi2_size_brosh(pen_bt, st, dw);
}

void touch_brosh(pen_bouton_t *pen_bt,setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_brosh == 1) {
        dw->color = sfWhite;
        pen_bt->touch_size_pen = 0;
        sfSprite_setScale(pen_bt->size_brosh, pen_bt->reel_scale_size_brosh);
    }
    if (pen_bt->touch_pen == 1) {
        sfSprite_setScale(pen_bt->size_brosh, pen_bt->invisibility_scale);
    }
    if (pen_bt->touch_brosh == 1 && st->event.mouseButton.x > 1000
    && st->event.mouseButton.x < 1100
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_size_brosh = 1;
    }
}
