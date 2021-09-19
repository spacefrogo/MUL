/*
** EPITECH PROJECT, 2019
** project
** File description:
** epitech 2019
*/

#include "my.h"

void	redo_it(sfRenderWindow *w, draw_sprite_t *v, draw_sprite_t *b)
{
    sfRenderWindow_drawSprite(w, v->s_menu, NULL);
    sfRenderWindow_drawSprite(w, v->s_off_p, NULL);
    sfRenderWindow_drawSprite(w, v->s_off_e, NULL);
    sfRenderWindow_drawSprite(w, v->s_background, NULL);
    sfRenderWindow_drawSprite(w, b->s_tower, NULL);
}

sfTexture       *get_texture(char *name)
{
    sfTexture *texture = sfTexture_createFromFile(name, NULL);

    return texture;
}
