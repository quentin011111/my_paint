/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-quentin.charillon
** File description:
** touch_color.c
*/

#include "libmy.h"
#include "struct.h"

void color_pen_button(pen_bouton_t *pen_bt)
{
    pen_bt->texture_color_option = sfTexture_createFromFile(
                                    "couleur_choice.png",NULL);
    pen_bt->color_option = sfSprite_create();
    pen_bt->pos_color_option = (sfVector2f) {1300, 10};
    pen_bt->scale_color_option = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->color_option, pen_bt->texture_color_option,
                        sfTrue);
    sfSprite_setScale(pen_bt->color_option, pen_bt->scale_color_option);
    sfSprite_setPosition(pen_bt->color_option, pen_bt->pos_color_option);

    pen_bt->texture_color_pen = sfTexture_createFromFile("color.png", NULL);
    pen_bt->color_pen = sfSprite_create();
    pen_bt->pos_color_pen = (sfVector2f) {1400, 10};
    pen_bt->scale_color_pen = (sfVector2f) {0,0};
    sfSprite_setTexture(pen_bt->color_pen, pen_bt->texture_color_pen, sfTrue);
    sfSprite_setScale(pen_bt->color_pen, pen_bt->scale_color_pen);
    sfSprite_setPosition(pen_bt->color_pen, pen_bt->pos_color_pen);
}

void colors_1(pen_bouton_t *pen_bt, setting_t *st)
{
    if (pen_bt->touch_color_option == 1
    && st->event.mouseButton.x > 1425 && st->event.mouseButton.x < 1453
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 40
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->color = 4;
        pen_bt->touch_color_option = 0;
    }

    if (pen_bt->touch_color_option == 1
    && st->event.mouseButton.x > 1425 && st->event.mouseButton.x < 1453
    && st->event.mouseButton.y > 41 && st->event.mouseButton.y < 65
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->color = 2;
        pen_bt->touch_color_option = 0;
    }
}

void color_2(pen_bouton_t *pen_bt, setting_t *st)
{
    if (pen_bt->touch_color_option == 1
    && st->event.mouseButton.x > 1425 && st->event.mouseButton.x < 1453
    && st->event.mouseButton.y > 66 && st->event.mouseButton.y < 100
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->color = 3;
        pen_bt->touch_color_option = 0;
    }

    if (pen_bt->touch_color_option == 1
    && st->event.mouseButton.x > 1461 && st->event.mouseButton.x < 1482
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 40
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->color = 5;
        pen_bt->touch_color_option = 0;
    }
}

void color_3(pen_bouton_t *pen_bt, setting_t *st)
{
    if (pen_bt->touch_color_option == 1
    && st->event.mouseButton.x > 1461 && st->event.mouseButton.x < 1482
    && st->event.mouseButton.y > 66 && st->event.mouseButton.y < 100
    && st->event.type == sfEvtMouseButtonPressed) {
        pen_bt->color = 6;
        pen_bt->touch_color_option = 0;
    }
}

void touch_color_option(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw)
{
    if (pen_bt->touch_pen == 1) {
        sfSprite_setScale(pen_bt->color_option, pen_bt->reel_scale);
    }
    if (pen_bt->touch_pen == 0) {
        sfSprite_setScale(pen_bt->color_option, pen_bt->invisibility_scale);
    }
    if (pen_bt->touch_pen == 1
    && st->event.mouseButton.x > 1300 && st->event.mouseButton.x < 1400
    && st->event.mouseButton.y > 0 && st->event.mouseButton.y < 123
    && st->event.type == sfEvtMouseButtonPressed) {
        sfSprite_setScale(pen_bt->color_pen, pen_bt->reel_scale);
        pen_bt->touch_color_option = 1;
    }
    if (pen_bt->touch_color_option == 0) {
        sfSprite_setScale(pen_bt->color_pen, pen_bt->invisibility_scale);
    }
    colors_1(pen_bt, st);
    color_2(pen_bt, st);
    color_3(pen_bt, st);
}
