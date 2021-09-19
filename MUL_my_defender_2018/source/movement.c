/*
** EPITECH PROJECT, 2019
** EPITECH
** File description:
** 2019
*/

#include "my.h"

void    else_rect(sfMouseMoveEvent mouse, draw_sprite_t *v)
{
    if (mouse.x >= 530 && mouse.x <= 680 &&     \
        mouse.y >= 250 && mouse.y <= 430)
        v->rect1.left = 240;
    else
        v->rect1.left = 0;
    sfSprite_setTextureRect(v->s_off_e, v->rect1);
}

void    do_rect(sfMouseMoveEvent mouse, draw_sprite_t *v)
{
    if (mouse.x >= 330 && mouse.x <= 510 &&     \
        mouse.y >= 250 && mouse.y <= 430)
        v->rect.left = 250;
    else
        v->rect.left = 0;
    sfSprite_setTextureRect(v->s_off_p, v->rect);
}

void    exit_now(sfMouseButtonEvent mouse, draw_sprite_t *v)
{
    if (mouse.x >= 530 && mouse.x <= 680 &&     \
        mouse.y >= 250 && mouse.y <= 430)
        exit(0);
}

void    do_b(sfMouseButtonEvent mouse, draw_sprite_t *v, draw_sprite_t *b)
{
    if (mouse.x >= 330 && mouse.x <= 510 &&     \
        mouse.y >= 250 && mouse.y <= 430) {
        v->rectb.width = 1000;
        b->rectT.width = 150;
    }
    sfSprite_setTextureRect(v->s_background, v->rectb);
    sfSprite_setTextureRect(b->s_tower, b->rectT);
}

void    set_menu(draw_sprite_t *v, draw_sprite_t *b, sfEvent event)
{
    sfMouseMoveEvent    mouse = event.mouseMove;
    sfMouseButtonEvent  button = event.mouseButton;

    if (event.type == sfEvtMouseMoved) {
        do_rect(mouse, v);
        else_rect(mouse, v);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        do_b(button, v, b);
        exit_now(button, v);
    }
}
