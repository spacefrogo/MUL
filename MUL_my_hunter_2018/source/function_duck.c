/*
** EPITECH PROJECT, 2018
** project
** File description:
** epitech
*/

#include "my.h"

sfSprite        *get_sprite(sfTexture* texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

void    get_position(sfSprite *sp_duck)
{
    sfVector2f p_duck;
    int bond;
    float v_duck = 1;

    p_duck.x = 0;
    p_duck.y = 0;
    if (p_duck.x == 690) {
        bond = - 1;
    }
    p_duck.x = p_duck.x + (v_duck * bond);
    if (p_duck.x == 0)
        bond = 1;
    sfSprite_setPosition(sp_duck, p_duck);
}

sfIntRect get_rec(int top, int left, int width, int height)
{
    sfIntRect angle;

    angle.top = top;
    angle.left = left;
    angle.width = width;
    angle.height = height;
    return (angle);
}

void    draw_sprite(sfRenderWindow *window, sfClock *clock)
{
    sfTexture *t_back = sfTexture_createFromFile("back.png", NULL);
    sfTexture *t_duck = sfTexture_createFromFile("duck.png", NULL);
    sfSprite *s_duck = get_sprite(t_duck);
    sfSprite *s_back = get_sprite(t_back);
    sfIntRect rec = get_rec(0, 0, 110, 110);
    sfTime time = sfClock_getElapsedTime(clock);
    int nova = 0;

    if (time.microseconds / 1000000.0 > 0.03) {
        nova++;
        rec = get_rec(0, 110, 110, 110);
        if (nova == 2)
            rec = get_rec(0 , 220, 110, 110);
        if (nova == 3) {
            rec = get_rec(0, 0, 110, 110);
            nova = 0;
        }
        get_position(s_duck);
        sfSprite_setTextureRect(s_duck, rec);
        sfClock_restart(clock);
    }
    get_position(s_duck);
    sfSprite_setTextureRect(s_duck, rec);
    sfRenderWindow_drawSprite(window, s_back, NULL);
    sfRenderWindow_drawSprite(window, s_duck, NULL);
}
