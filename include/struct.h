/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-quentin.charillon
** File description:
** struct.h
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/BlendMode.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Joystick.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/System/InputStream.h>
#include <SFML/Graphics.h>


#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct framebuffer {
        unsigned int width;
        unsigned int height;
        sfUint8 *pixels;
    }framebuffer_t;

    typedef struct draw {
        sfSprite* sprite;
        sfTexture* texture;
        sfColor color;
        int size;
    }draw_t;

    typedef struct setting {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
        sfTexture* texture_limit;
        sfSprite* limit;
        sfVector2f pos_limit;
        sfVector2f scale_limit;
    }setting_t;

    typedef struct pen_bouton {
        int touch;
        int color;
        sfVector2f invisibility_scale;
        sfVector2f reel_scale;
        sfVector2f reel_scale_size;
        sfVector2f reel_scale_size_nb;
        sfVector2f reel_scale_size_4;
        sfVector2f reel_scale_size_brosh;
        sfVector2f reel_scale_helper;

        sfTexture* texture_pen_button;
        sfSprite *pen_button;
        sfVector2f pos_pen_button;
        sfVector2f scale_pen_button;

        sfTexture *texture_brosh;
        sfSprite *brosh;
        sfVector2f pos_brosh;
        sfVector2f scale_brosh;

        int touch_edit;
        int touch_pen;
        int touch_size_pen;
        int touch_brosh;
        int touch_size_brosh;
        int touch_file;
        int touch_color_option;
        int touch_helper;
        int touch_start;

        sfTexture *texture_edit;
        sfSprite *edit;
        sfVector2f pos_edit;
        sfVector2f scale_edit;

        sfTexture *texture_folder;
        sfSprite *folder;
        sfVector2f pos_folder;
        sfVector2f scale_folder;

        sfTexture *texture_helper;
        sfSprite *helper;
        sfVector2f pos_helper;
        sfVector2f scale_helper;

        sfTexture *texture_size_pen;
        sfSprite *size_pen;
        sfVector2f pos_size_pen;
        sfVector2f scale_size_pen;

        sfTexture *texture_size_1;
        sfSprite *size_1;
        sfVector2f pos_size_1;
        sfVector2f scale_size_1;

        sfTexture *texture_size_2;
        sfSprite *size_2;
        sfVector2f pos_size_2;
        sfVector2f scale_size_2;

        sfTexture *texture_size_3;
        sfSprite *size_3;
        sfVector2f pos_size_3;
        sfVector2f scale_size_3;

        sfTexture *texture_size_4;
        sfSprite *size_4;
        sfVector2f pos_size_4;
        sfVector2f scale_size_4;

        sfTexture *texture_size_brosh;
        sfSprite *size_brosh;
        sfVector2f pos_size_brosh;
        sfVector2f scale_size_brosh;

        sfTexture *texture_size_brosh_1;
        sfSprite *size_brosh_1;
        sfVector2f pos_size_brosh_1;
        sfVector2f scale_size_brosh1;

        sfTexture *texture_size_brosh_2;
        sfSprite *size_brosh_2;
        sfVector2f pos_size_brosh_2;
        sfVector2f scale_size_brosh_2;

        sfTexture *texture_size_brosh_3;
        sfSprite *size_brosh_3;
        sfVector2f pos_size_brosh_3;
        sfVector2f scale_size_brosh_3;

        sfTexture *texture_size_brosh_4;
        sfSprite *size_brosh_4;
        sfVector2f pos_size_brosh_4;
        sfVector2f scale_size_brosh_4;

        sfTexture *texture_new_file;
        sfSprite *new_file;
        sfVector2f pos_new_file;
        sfVector2f scale_new_file;

        sfTexture *texture_save_file;
        sfSprite *save_file;
        sfVector2f pos_save_file;
        sfVector2f scale_save_file;

        sfTexture *texture_open_file;
        sfSprite *open_file;
        sfVector2f pos_open_file;
        sfVector2f scale_open_file;

        sfTexture *texture_color_option;
        sfSprite *color_option;
        sfVector2f pos_color_option;
        sfVector2f scale_color_option;

        sfTexture *texture_color_pen;
        sfSprite *color_pen;
        sfVector2f pos_color_pen;
        sfVector2f scale_color_pen;

        sfTexture *texture_helper_bt;
        sfSprite *helper_bt;
        sfVector2f pos_helper_bt;
        sfVector2f scale_helper_bt;

        sfTexture *texture_home_screen;
        sfSprite *home_screen;
        sfVector2f pos_home_screen;
        sfVector2f scale_home_screen;

        sfTexture *texture_start;
        sfSprite *start;
        sfVector2f pos_start;
        sfVector2f scale_start;

    }pen_bouton_t;

    framebuffer_t *framebuffer_create(int width, int height);
    void my_put_pixel(framebuffer_t *fb, unsigned int x,unsigned int y,
                    sfColor color);
    void pen_button(pen_bouton_t *pen_bt);
    void gomme_button(pen_bouton_t *pen_bt);
    void edit_button(pen_bouton_t *pen_bt);
    void folder_button(pen_bouton_t *pen_bt);
    void helper_button(pen_bouton_t *pen_bt);
    void size_button(pen_bouton_t *pen_bt);
    void size_reel_button(pen_bouton_t *pen_bt);
    void size1_button(pen_bouton_t *pen_bt);
    void size2_button(pen_bouton_t *pen_bt);
    void size3_button(pen_bouton_t *pen_bt);
    void size4_button(pen_bouton_t *pen_bt);
    void vari_for_button(pen_bouton_t *pen_bt);
    void size_brosh_button(pen_bouton_t *pen_bt);
    void size_reel_brosh_button(pen_bouton_t *pen_bt);
    void size1_brosh_button(pen_bouton_t *pen_bt);
    void size2_brosh_button(pen_bouton_t *pen_bt);
    void size3_brosh_button(pen_bouton_t *pen_bt);
    void size4_brosh_button(pen_bouton_t *pen_bt);
    void colors_1(pen_bouton_t *pen_bt, setting_t *st);
    void colors_2(pen_bouton_t *pen_bt, setting_t *st);
    void colors_3(pen_bouton_t *pen_bt, setting_t *st);
    void home_screen(pen_bouton_t *pen_bt);
    void start(pen_bouton_t *pen_bt);
    void draw_file(pen_bouton_t *p_bt, setting_t *st);
    void draw_pen(pen_bouton_t *p_bt, setting_t *st);
    void draw_brosh(pen_bouton_t *p_bt, setting_t *st);
    #define WIDTH 1920
    #define HEIGHT 1080

#endif /*STRUC_H_*/
