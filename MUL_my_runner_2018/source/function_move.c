/*
** EPITECH PROJECT, 2018
** project
** File description:
** epitech
*/

#include "my.h"

sfSprite	*get_sprite(sfTexture* texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

sfIntRect	get_rec(float top, float left, float width, float height)
{
    sfIntRect angle;

    angle.top = top;
    angle.left = left;
    angle.width = width;
    angle.height = height;
    return (angle);
}

void	rect_of_sprites(draw_sprite_t *v)
{
    v->rec = get_rec(0, 99.875, 110, 110);
    v->rec2 = get_rec(0, 110, 110, 110);
    v->b_rec = get_rec(0, 0, 1080, 1920);
}

draw_sprite_t	*sprites(void)
{
    draw_sprite_t	*v = malloc(sizeof(draw_sprite_t));

    rect_of_sprites(v);
    v->t_back = get_texture("source/back.png");
    v->t_man = get_texture("source/man.png");
    v->t_snowman = get_texture("source/sombrero.png");
    v->s_man = get_sprite(v->t_man);
    v->s_back = get_sprite(v->t_back);
    v->s_snowman = get_sprite(v->t_snowman);
    v->p_snowman = get_position(700, 695);
    v->p_man = get_position(300, 695);
    v->p_back = get_position(0, 0);
    v->clock = sfClock_create();
    sfSprite_setPosition(v->s_man, v->p_man);
    sfSprite_setPosition(v->s_back, v->p_back);
    sfSprite_setPosition(v->s_snowman, v->p_snowman);
    sfSprite_setTextureRect(v->s_man, v->rec);
    sfSprite_setTextureRect(v->s_snowman, v->rec2);
    sfSprite_setTextureRect(v->s_back, v->b_rec);
    return (v);
}
