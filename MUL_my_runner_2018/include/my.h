
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

typedef struct  draw_sprite
{
    sfIntRect   rec;
    sfIntRect   rec2;
    sfIntRect   b_rec;
    sfTexture   *t_back;
    sfTexture   *t_man;
    sfTexture   *t_snowman;
    sfSprite    *s_man;
    sfSprite    *s_back;
    sfSprite    *s_snowman;
    sfVector2f  p_snowman;
    sfVector2f  p_man;
    sfVector2f  p_back;
    sfMusic	*warcraft;
    sfSoundBuffer *buff;
    sfSound	*sound;
    sfClock	*clock;
    float	seconds;
    sfTime	time;
    int i;
    int j;
}       draw_sprite_t;

void	help_cousin(draw_sprite_t *, sfRenderWindow *, sfEvent);
void	help_part2(draw_sprite_t *, sfRenderWindow *, sfEvent);
void	help_sisters(draw_sprite_t *);
void	help_bros(draw_sprite_t *);
void	destroy_things(draw_sprite_t *, sfRenderWindow *);
void	draw_things(draw_sprite_t *, sfRenderWindow *);
void	do_movement(draw_sprite_t *);
draw_sprite_t   *sprites(void);
sfTexture       *get_texture(char *);
void    redo_it(sfRenderWindow *, sfSprite *, sfSprite *, sfSprite *);
void    do_again(sfSprite *, sfVector2f, sfSprite *, sfVector2f);
sfVector2f      get_position(int, int);
void	play_music(void);
void	get_mouse(sfVector2i, sfEvent);
sfIntRect	get_rec(float, float, float, float);
void	info(void);
void    draw_sprite(sfRenderWindow *window, sfClock *clock);
void    draw_back(sfRenderWindow *);
void	set_time(sfRenderWindow *, float, int);
sfSprite	*get_sprite(sfTexture *);
sfRenderWindow	*set_sprites(sfRenderWindow *);
sfRenderWindow	*create_window(unsigned int, unsigned int);
void  	my_putchar(char);
int     my_strlen(char const *);
int     my_put_nbr_base(int, char *);
int	my_putstr(char const *);
char    *my_strdup(char *);
int     count_chars(char const *);
char	**string_to_word_array(char const *);
void	my_show_word_array(char **);

#endif // _MY_H_
