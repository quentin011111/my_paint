/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_edit.c
*/

#include "libmy.h"
#include "struct.h"

void touch_edit_active(pen_bouton_t *pen_bt, setting_t *st)
{
    if (st->event.mouseButton.x > 240 && st->event.mouseButton.x < 380
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_edit = 1;
    }
}

void touch_edit(pen_bouton_t *pen_bt, setting_t *st)
{
    touch_edit_active(pen_bt, st);
    rescale_touch_edit(pen_bt);

    if (pen_bt->touch_edit == 1 && st->event.mouseButton.x > 400
    && st->event.mouseButton.x < 470
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 70
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_edit = 0;
        pen_bt->touch_brosh = 0;
        pen_bt->touch_pen = 1;
    }

    if (pen_bt->touch_edit == 1 && st->event.mouseButton.x > 380
    && st->event.mouseButton.x < 470
    && st->event.mouseButton.y > 71 && st->event.mouseButton.y < 115
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_edit = 0;
        pen_bt->touch_pen = 0;
        pen_bt->touch_brosh = 1;
    }
}

void rescale_touch_edit(pen_bouton_t *pen_bt)
{
    if (pen_bt->touch_edit == 1) {
        sfSprite_setScale(pen_bt->pen_button, pen_bt->reel_scale);
        sfSprite_setScale(pen_bt->brosh, pen_bt->reel_scale);
    }

    if (pen_bt->touch_edit == 0) {
        sfSprite_setScale(pen_bt->pen_button, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->brosh, pen_bt->invisibility_scale);
    }
}
