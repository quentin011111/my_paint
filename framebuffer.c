/*
** EPITECH PROJECT, 2022
** bsmy_paint
** File description:
** framebuffer.c
*/

#include "libmy.h"
#include "struct.h"

framebuffer_t *framebuffer_create(int width, int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->height = height;
    framebuffer->width = width;
    framebuffer->pixels = malloc(width * height * sizeof(sfColor));
    return framebuffer;
}

void my_put_pixel(framebuffer_t *fb, unsigned int x, unsigned int y,
                sfColor color)
{
    unsigned int i = ((y * fb->width) + x) * sizeof(sfColor);
    fb->pixels[i + 0] = color.r;
    fb->pixels[i + 1] = color.g;
    fb->pixels[i + 2] = color.b;
    fb->pixels[i + 3] = color.a;
}
