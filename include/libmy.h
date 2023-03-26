/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** libmy.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <ncurses.h>
#include "struct.h"
#include <ctype.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <dirent.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/sysmacros.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "struct.h"



#ifndef MYPRINT_H_
    #define MYPRINT_H_

void my_putchar(char c);
double my_abs(double x);
int my_putstr(char const *str);
int my_find (char a);
void my_putnbr(int nb);
int my_strlen(char const *str);
long convert_octal(long dec);
int my_putnbr_long(long nbr, char *base);
void my_putnbr_long_unsigned(unsigned long nbr, char *base);
void my_putfloat(float f);
void hexa_convertor(long dec_nbr);
int check_nsignd(unsigned int a);
char my_non_printable_str(char const *str);
void convertor_binaire(unsigned long int a);
void hexa_convertor_up(int dec_nbr);
int my_getnbr(char const *str);
bool str_compare(char *str, char *str2);
void cond1(const char *format, int i, va_list list);
void cond2(const char *format, int i, va_list list);
void cond3(const char *format, int i, va_list list);
void cond4(const char *format, int i, va_list list);
char **str_to_word_array(char *str);
void free_str(char **str);
bool my_strstr(char *str1, char *str2);
char *my_strcat(char *dest, char *src);
char * my_strcpy(char *dest, char const *src);
void my_printf( const char * format , ...);
framebuffer_t *framebuffer_create(int width, int height);
void framebuffer_destroy(framebuffer_t *fb);
int game(void);
void initialisation(setting_t *st, draw_t *dw, pen_bouton_t *pen_bt);
void init_button(pen_bouton_t *pen_bt);
void init_draw(draw_t *draw);
void do_square_with_pixel(draw_t *dw, framebuffer_t *fb, setting_t *st);
void game_loop(setting_t *st, framebuffer_t *fb, draw_t *dw,
                pen_bouton_t *p_bt);
void init_window(setting_t *setting);
void analyse_events(setting_t *st, framebuffer_t *fb,
                    draw_t *dw, pen_bouton_t *pen_bt);
void touch_edit(pen_bouton_t *pen_bt, setting_t *st);
void rescale_touch_edit(pen_bouton_t *pen_bt);
void touch_pen(pen_bouton_t *pen_bt, setting_t *st,
                draw_t *dw, framebuffer_t *fb);
void put_pixel(pen_bouton_t *pen_bt, setting_t *st,
                draw_t *dw, framebuffer_t *fb);
void touch_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void touch_file(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw,
                framebuffer_t *fb);
void rescale_touch_size_pen(pen_bouton_t *pen_bt);
void cond1_for_change_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void cond2_for_change_size_pen(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void touch_brosh(pen_bouton_t *pen_bt,setting_t *st, draw_t *dw);
void touch_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void new_file_button(pen_bouton_t *pen_bt);
void save_file_button(pen_bouton_t *pen_bt);
void open_file_button(pen_bouton_t *pen_bt);
void touch_file(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw,
                framebuffer_t *fb);
void color_pen_button(pen_bouton_t *pen_bt);
void touch_color_option(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void rescale_touch_file(pen_bouton_t *pen_bt);
void condi_for_change_button_file(pen_bouton_t *pen_bt, setting_t *st);
void rescale_touch_size_brosh(pen_bouton_t *pen_bt);
void condi1_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void condi2_size_brosh(pen_bouton_t *pen_bt, setting_t *st, draw_t *dw);
void reel_helper_button(pen_bouton_t *pen_bt);
void destroy(pen_bouton_t *pen_bt, draw_t *dw, setting_t *st);
void destroy_other_button(pen_bouton_t *pen_bouton);
void destroy_pen(pen_bouton_t *pen_bouton);
void destroy_brosh(pen_bouton_t *pen_bouton);

#endif /* MYPRINT_H_ */
