/*
** EPITECH PROJECT, 2022
** bsmy_paint
** File description:
** game.c
*/

#include "libmy.h"
#include "struct.h"

void initialisation(setting_t *st, draw_t *dw, pen_bouton_t *pen_bt)
{
    init_window(st);
    init_button(pen_bt);
    init_draw(dw);
}

void game_loop(setting_t *st, framebuffer_t *fb,
                draw_t *dw, pen_bouton_t *p_bt)
{
    while (sfRenderWindow_isOpen(st->window)) {
        while (sfRenderWindow_pollEvent(st->window, &st->event)) {
            analyse_events(st, fb, dw, p_bt);
        }
        sfRenderWindow_clear(st->window, sfWhite);
        sfTexture_updateFromPixels(dw->texture, fb->pixels, 1920, 1080, 0, 0);
        sfRenderWindow_drawSprite(st->window, dw->sprite, NULL);
        draw_file(p_bt, st);
        draw_pen(p_bt, st);
        draw_brosh(p_bt, st);
        sfRenderWindow_drawSprite(st->window, st->limit, NULL);
        sfRenderWindow_drawSprite(st->window, p_bt->helper_bt, NULL);
        sfRenderWindow_drawSprite(st->window, p_bt->helper, NULL);
        sfRenderWindow_drawSprite(st->window, p_bt->edit, NULL);
        sfRenderWindow_drawSprite(st->window, p_bt->home_screen, NULL);
        sfRenderWindow_drawSprite(st->window, p_bt->start, NULL);
        sfRenderWindow_display(st->window);
    }
}

int game(void)
{
    setting_t setting = { 0 };
    draw_t draw = { 0 };
    pen_bouton_t pen_bouton = { 0 };
    framebuffer_t *fb = framebuffer_create(1920, 1080);
    initialisation(&setting, &draw, &pen_bouton);
    game_loop(&setting, fb, &draw, &pen_bouton);
    destroy(&pen_bouton, &draw,  &setting);
}
