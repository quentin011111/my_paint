/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_file.c
*/

#include "libmy.h"
#include "struct.h"

void draw_white_pixel(framebuffer_t *fb, draw_t *dw)
{
    for (int i = 0; i < 1080; i++) {
        for (int j = 0; j < 1920; j++) {
            my_put_pixel(fb, j, i, dw->color);
        }
    }
}

void condi_for_change_button_file(pen_bouton_t *pen_bt, setting_t *st)
{
    if (st->event.mouseButton.x > 50 && st->event.mouseButton.x < 230
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_file = 1;
    }
}

void rescale_touch_file(pen_bouton_t *pen_bt)
{
    if (pen_bt->touch_file == 1) {
        sfSprite_setScale(pen_bt->open_file, pen_bt->reel_scale);
        sfSprite_setScale(pen_bt->new_file, pen_bt->reel_scale);
        sfSprite_setScale(pen_bt->save_file, pen_bt->reel_scale);
    }

    if (pen_bt->touch_file == 0) {
        sfSprite_setScale(pen_bt->open_file, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->new_file, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->save_file, pen_bt->invisibility_scale);
    }
}

void touch_file(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw,
                framebuffer_t *fb)
{
    condi_for_change_button_file(pen_bt, st);
    rescale_touch_file(pen_bt);
    if (pen_bt->touch_file == 1
    && st->event.mouseButton.x > 630 && st->event.mouseButton.x < 700
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        sfSprite_setScale(pen_bt->size_brosh, pen_bt->invisibility_scale);
        pen_bt->touch_pen = 0;
        pen_bt->touch_brosh = 0;
        dw->color = sfWhite;
        pen_bt->touch_file = 0;
        draw_white_pixel(fb, dw);
    }
}
