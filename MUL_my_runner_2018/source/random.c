/*
** EPITECH PROJECT, 2019
** project
** File description:
** epitech 2019
*/

#include "my.h"

sfTexture       *get_texture(char *name)
{
    sfTexture *texture = sfTexture_createFromFile(name, NULL);

    return texture;
}

sfVector2f      get_position(int x, int y)
{
    sfVector2f position;

    position.x = x;
    position.y = y;
    return (position);
}

void	do_movement(draw_sprite_t *v)
{
    if (v->b_rec.left == 1920)
        v->b_rec = get_rec(0, 0, 1920, 1080);
    else
        v->b_rec = get_rec(0, v->b_rec.left + 5, 1920, 1080);
    sfSprite_setTextureRect(v->s_back, v->b_rec);
    sfTexture_setRepeated(v->t_back, sfTrue);
}

void	draw_things(draw_sprite_t *v, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, v->s_back, NULL);
    sfRenderWindow_drawSprite(window, v->s_man, NULL);
    sfRenderWindow_drawSprite(window, v->s_snowman, NULL);
    sfRenderWindow_display(window);
}

void	destroy_things(draw_sprite_t *v, sfRenderWindow *window)
{
    sfSound_destroy(v->sound);
    sfSoundBuffer_destroy(v->buff);
    sfMusic_destroy(v->warcraft);
    sfRenderWindow_destroy(window);
}
