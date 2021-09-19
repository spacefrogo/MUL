/*
** EPITECH PROJECT, 2018
** header
** File description:
** bre
*/

#ifndef _RPG_H_
#define _RPG_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my.h"

typedef    struct  draw_sprite
{
    sfIntRect rect;
    sfIntRect rect1;
    sfIntRect rectb;
    sfIntRect rectT;
    sfIntRect rectInfo;
    sfIntRect rectP;
    sfTexture *t_portal;
    sfSprite *s_portal;
    sfTexture *t_background;
    sfTexture *t_menu;
    sfTexture *t_apple;
    sfTexture *b_off_p;
    sfTexture *b_off_e;
    sfTexture *t_tower;
    sfSprite *s_background;
    sfSprite *s_apple;
    sfSprite *s_tower;
    sfSprite *s_menu;
    sfSprite *s_off_p;
    sfSprite *s_off_e;
    sfMusic *warcraft;
    sfSoundBuffer *buff;
    sfSound *sound;
    sfVector2f portal;
    sfVector2f tower;
    sfVector2f apple;
    sfVector2f p_off;
    sfVector2f e_off;
}  draw_sprite_t;

void    do_b(sfMouseButtonEvent, draw_sprite_t *, draw_sprite_t *);
void    do_rect(sfMouseMoveEvent, draw_sprite_t *);
sfVector2f get_position(int, int);

draw_sprite_t *sprites(void);
draw_sprite_t *sprites_2(void);
sfTexture *get_texture(char *);
void events(sfRenderWindow *, draw_sprite_t *, draw_sprite_t *);
void draw_sprites(sfRenderWindow *, draw_sprite_t *, draw_sprite_t *);
sfIntRect get_rec(float, float, float, float);
void info(void);
void draw_sprite(sfRenderWindow *window, sfClock *clock);
sfSprite *get_sprite(sfTexture *);
void set_sprites(sfRenderWindow *);
sfRenderWindow *create_window(unsigned int, unsigned int);
void move_player(sfEvent, draw_sprite_t *);

#endif // _RPG_H_
