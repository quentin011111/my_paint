/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_pen.c
*/

#include "libmy.h"
#include "struct.h"

void condi_for_color_pen(pen_bouton_t *pen_bt, draw_t *dw)
{
    if (pen_bt->touch_pen == 1) {
        sfSprite_setScale(pen_bt->size_pen, pen_bt->reel_scale);
    }
    if (pen_bt->color == 1) {
        dw->color = sfBlack;
    }
    if (pen_bt->color == 2) {
        dw->color = sfRed;
    }
    if (pen_bt->color == 3) {
        dw->color = sfYellow;
    }
}

void condi2_for_color_pen(pen_bouton_t *pen_bt, draw_t *dw)
{
    if (pen_bt->color == 4) {
        dw->color = sfBlue;
    }
    if (pen_bt->color == 5) {
        dw->color = sfGreen;
    }
    if (pen_bt->color == 6) {
        dw->color = sfCyan;
    }
}

void do_square_with_pixel(draw_t *dw, framebuffer_t *fb, setting_t *st)
{
    for (int i = 0; i < dw->size; i++) {
        for (int j = 0; j < dw->size; j++) {
            my_put_pixel(fb, st->event.mouseMove.x + j,
                        st->event.mouseMove.y + i, dw->color);
        }
    }
}

void put_pixel(pen_bouton_t *pen_bt, setting_t *st,
                draw_t *dw, framebuffer_t *fb)
{
        if (pen_bt->touch_start == 0
        && sfMouse_isButtonPressed(sfMouseLeft) == true
        && st->event.mouseMove.x > 0 && st->event.mouseMove.x < 1920
        && st->event.mouseMove.y > 150 && st->event.mouseMove.y < 1075) {
            do_square_with_pixel(dw, fb, st);
        }
}

void touch_pen(pen_bouton_t *pen_bt, setting_t *st,
                draw_t *dw, framebuffer_t *fb)
{
    put_pixel(pen_bt, st, dw, fb);
    condi_for_color_pen(pen_bt, dw);
    condi2_for_color_pen(pen_bt, dw);

    if (pen_bt->touch_pen == 0) {
        sfSprite_setScale(pen_bt->size_pen, pen_bt->invisibility_scale);
    }
    if (pen_bt->touch_pen == 1 && st->event.mouseButton.x > 1000
    && st->event.mouseButton.x < 1100
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->touch_file = 0;
        pen_bt->touch_brosh = 0;
        pen_bt->touch_size_pen = 1;
    }
}
