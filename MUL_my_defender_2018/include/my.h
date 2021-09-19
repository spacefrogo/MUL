/*
** EPITECH PROJECT, 2018
** header
** File description:
** bre
*/

#ifndef _MY_H_
#define _MY_H_

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

typedef	struct	draw_sprite
{
    sfIntRect	rect;
    sfIntRect	rect1;
    sfIntRect	rectb;
    sfIntRect	rectT;
    sfIntRect	rectT2;
    sfTexture	*t_background;
    sfTexture	*t_menu;
    sfTexture	*t_tower2;
    sfTexture	*b_off_p;
    sfTexture	*b_off_e;
    sfTexture	*t_tower;
    sfSprite	*s_background;
    sfSprite	*s_tower2;
    sfSprite	*s_tower;
    sfSprite	*s_menu;
    sfSprite	*s_off_p;
    sfSprite	*s_off_e;
    sfVector2f	tower;
    sfVector2f	tower2;
    sfVector2f	p_off;
    sfVector2f	e_off;
}	draw_sprite_t;

draw_sprite_t   *sprites_2(void);
void    set_menu(draw_sprite_t *,draw_sprite_t *, sfEvent);
draw_sprite_t	*sprites(void);
sfTexture       *get_texture(char *);
int    close_window(sfRenderWindow *, draw_sprite_t *, draw_sprite_t *);
void    do_this(sfRenderWindow *, draw_sprite_t *);
void    redo_it(sfRenderWindow *, draw_sprite_t *, draw_sprite_t *);
void    do_again(sfSprite *, sfVector2f, sfSprite *, sfVector2f);
sfVector2f      get_position(int, int);
void	play_music(void);
void	get_mouse(sfVector2i, sfEvent);
sfIntRect	get_rec(float, float, float, float);
void	info(void);
void    draw_sprite(sfRenderWindow *window, sfClock *clock);
sfSprite	*get_sprite(sfTexture *);
void	set_sprites(sfRenderWindow *);
sfRenderWindow	*create_window(unsigned int, unsigned int);
int     my_getnbr(char *);
void  	my_putchar(char);
int     my_strlen(char const *);
int     my_put_nbr_base(int, char *);
int	my_putstr(char const *);

#endif // _MY_H_
