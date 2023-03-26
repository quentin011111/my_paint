/*
** EPITECH PROJECT, 2022
** bsmy_paint
** File description:
** init_param.c
*/

#include "libmy.h"
#include "struct.h"

void vari_for_button(pen_bouton_t *pen_bt)
{
    pen_bt->touch = 2;
    pen_bt->color = 1;
    pen_bt->invisibility_scale = (sfVector2f) {0, 0};
    pen_bt->reel_scale = (sfVector2f) {0.2, 0.2};
    pen_bt->reel_scale_size = (sfVector2f) {0.5, 0.5};
    pen_bt->reel_scale_helper = (sfVector2f) {1, 1};
    pen_bt->reel_scale_size_nb = (sfVector2f) {0.1, 0.1};
    pen_bt->reel_scale_size_4 = (sfVector2f) {0.2, 0.2};
    pen_bt->reel_scale_size_brosh = (sfVector2f) {0.2, 0.2};
    pen_bt->touch_edit = 0;
    pen_bt->touch_pen = 0;
    pen_bt->touch_size_pen = 0;
    pen_bt->touch_brosh = 0;
    pen_bt->touch_size_brosh = 0;
    pen_bt->touch_file = 0;
    pen_bt->touch_color_option = 0;
    pen_bt->touch_start = 1;

}

void init_button(pen_bouton_t *pen_bt)
{
    vari_for_button(pen_bt);
    home_screen(pen_bt);
    start(pen_bt);
    pen_button(pen_bt);
    color_pen_button(pen_bt);
    gomme_button(pen_bt);
    edit_button(pen_bt);
    folder_button(pen_bt);
    helper_button(pen_bt);
    new_file_button(pen_bt);
    save_file_button(pen_bt);
    open_file_button(pen_bt);
    size_button(pen_bt);
    size_brosh_button(pen_bt);
    reel_helper_button(pen_bt);

}

void init_draw(draw_t *draw)
{
    draw->color = sfBlack;
    draw->texture = sfTexture_create(1920, 1080);
    draw->sprite = sfSprite_create();
    draw->size = 10;
    sfSprite_setTexture(draw->sprite, draw->texture, sfTrue);
}

void init_window(setting_t *setting)
{
    sfVideoMode screen = {WIDTH, HEIGHT, 32};
    setting->mode = screen;
    setting->window = sfRenderWindow_create(setting->mode, "My Paint",
                                            sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(setting->window, 60);
    setting->texture_limit = sfTexture_createFromFile("trait.png", NULL);
    setting->pos_limit = (sfVector2f) {-250, 60};
    setting->scale_limit = (sfVector2f) {3,0.5};
    setting->limit = sfSprite_create();
    sfSprite_setTexture(setting->limit, setting->texture_limit, sfTrue);
    sfSprite_setScale(setting->limit, setting->scale_limit);
    sfSprite_setPosition(setting->limit, setting->pos_limit);
}
