/*
** EPITECH PROJECT, 2019
** EPITECH 2019
** File description:
** project
*/

#include "my.h"

void    rect_of_sprites(draw_sprite_t *v)
{
    v->rect.left = 0;
    v->rect.width = 250;
    v->rect.height = 195;
    v->rect.top = 0;
    v->rectb.left = 0;
    v->rectb.width = 0;
    v->rectb.height = 667;
    v->rectb.top = 0;
    v->rect1.left = 0;
    v->rect1.width = 240;
    v->rect1.height = 195;
    v->rect1.top = 0;
}

void	rect_of_sprites_2(draw_sprite_t *b)
{
    b->rectT.left = 0;
    b->rectT.top = 0;
    b->rectT.width = 0;
    b->rectT.height = 113;
    b->rectT2.left = 0;
    b->rectT2.top = 0;
    b->rectT2.width = 0;
    b->rectT2.height = 81;
    
}
  
draw_sprite_t   *sprites(void)
{
    draw_sprite_t       *v = malloc(sizeof(draw_sprite_t));

    rect_of_sprites(v);
    v->t_menu = get_texture("source/menu.png");
    v->b_off_p = get_texture("source/play.png");
    v->b_off_e = get_texture("source/blla.png");
    v->t_background = get_texture("source/bg.png");
    v->s_background = get_sprite(v->t_background);
    v->s_menu = get_sprite(v->t_menu);
    v->s_off_p = get_sprite(v->b_off_p);
    v->s_off_e = get_sprite(v->b_off_e);
    v->p_off = get_position(300, 250);
    v->e_off = get_position(500, 250);
    sfSprite_setPosition(v->s_off_p, v->p_off);
    sfSprite_setPosition(v->s_off_e, v->e_off);
    sfSprite_setTextureRect(v->s_off_p, v->rect);
    sfSprite_setTextureRect(v->s_off_e, v->rect1);
    sfSprite_setTextureRect(v->s_background, v->rectb);
    return (v);
}

draw_sprite_t   *sprites_2(void)
{
    draw_sprite_t	*b = malloc(sizeof(draw_sprite_t));

    rect_of_sprites_2(b);
    b->t_tower = get_texture("source/tower.png");
    b->s_tower = get_sprite(b->t_tower);
    b->tower = get_position(240, 250);
    b->t_tower2 = get_texture("source/tower2.png");
    b->s_tower2 = get_sprite(b->t_tower2);
    b->tower2 = get_position(480, 500);
    sfSprite_setPosition(b->s_tower, b->tower);
    sfSprite_setPosition(b->s_tower2, b->tower2);
    sfSprite_setTextureRect(b->s_tower, b->rectT);
    sfSprite_setTextureRect(b->s_tower2, b->rectT);
    return (b);
}
