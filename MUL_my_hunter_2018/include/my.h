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

void	play_sound(void);
void	get_mouse(sfVector2i, sfEvent);
void	get_position(sfSprite *);
sfIntRect	get_rec(int, int, int, int);
void	info(void);
void    draw_duck(sfRenderWindow *window, sfClock *clock);
void	mouse(sfEvent, int, float, sfRenderWindow *window);
void	position(sfVector2f p_duck);
void    draw_back(sfRenderWindow *);
void	set_time(sfRenderWindow *, float, int);
sfSprite        *get_sprite(sfTexture *);
sfRenderWindow	*set_sprites(sfRenderWindow *);
sfRenderWindow	*create_window(unsigned int, unsigned int);
char	**replace(char *);
int	nb_columns(char *);
int	nb_rows(char *);
int     my_getnbr(char *);
int     fs_open_file(char const *);
void  	my_putchar(char);
int     my_strlen(char const *);
int	my_printf(char*, ...);
int     my_put_nbr_base(int, char *);
int	my_putstr(char const *);
char    *my_strdup(char *);
int     count_chars(char const *);
char	**string_to_word_array(char const *);
void	my_show_word_array(char **);

#endif // _MY_H_
