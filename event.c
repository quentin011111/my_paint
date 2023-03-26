/*
** EPITECH PROJECT, 2022
** bsmy_paint
** File description:
** event.c
*/

#include "libmy.h"
#include "struct.h"

void touch_start(pen_bouton_t *pen_bt, setting_t *st)
{
    if (st->event.mouseButton.x > 700 && st->event.mouseButton.x < 1200
    && st->event.mouseButton.y > 450 && st->event.mouseButton.y < 675
    && st->event.type == sfEvtMouseButtonPressed) {
        sfSprite_setScale(pen_bt->home_screen, pen_bt->invisibility_scale);
        sfSprite_setScale(pen_bt->start, pen_bt->invisibility_scale);
        pen_bt->touch_start = 0;
    }
}

void touch_helper(pen_bouton_t *pen_bt, setting_t *st)
{
    if (st->event.mouseButton.x > 500 && st->event.mouseButton.x < 620
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_helper = 1;
    }
    if (pen_bt->touch_helper == 1) {
        sfSprite_setScale(pen_bt->helper_bt, pen_bt->reel_scale_helper);
    }
    if (pen_bt->touch_helper == 1
    && st->event.mouseButton.x > 1400 && st->event.mouseButton.x < 1490
    && st->event.mouseButton.y > 190 && st->event.mouseButton.y < 250
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_helper = 0;
        sfSprite_setScale(pen_bt->helper_bt, pen_bt->invisibility_scale);
    }
}

void analyse_events(setting_t *st, framebuffer_t *fb,
                    draw_t *dw, pen_bouton_t *pen_bt)
{
    touch_start(pen_bt, st);
    touch_edit(pen_bt, st);
    touch_helper(pen_bt, st);
    touch_pen(pen_bt, st, dw, fb);
    touch_size_pen(pen_bt, st, dw);
    touch_color_option(pen_bt, st, dw);
    touch_brosh(pen_bt, st, dw);
    touch_size_brosh(pen_bt, st, dw);
    touch_file(pen_bt, st, dw, fb);

    if (st->event.type == sfEvtClosed)
        sfRenderWindow_close(st->window);
}
