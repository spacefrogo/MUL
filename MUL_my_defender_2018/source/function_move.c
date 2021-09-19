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

sfVector2f	get_position(int x, int y)
{
    sfVector2f position;

    position.x = x;
    position.y = y;
    return (position);
}

void	play_music(void)
{
    sfMusic *warcraft = sfMusic_createFromFile("source/warcraft.ogg");

    sfMusic_setLoop(warcraft, sfTrue);
    sfMusic_play(warcraft);
}
