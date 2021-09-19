/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** my_runner
*/

#include "my.h"

sfRenderWindow	*set_sprites(sfRenderWindow *window)
{
    sfEvent event;
    draw_sprite_t	*v = malloc(sizeof(draw_sprite_t));
    int i = 0;
    int j = 0;

    v = sprites();
    v->warcraft = sfMusic_createFromFile("source/warcraft.ogg");
    v->buff = sfSoundBuffer_createFromFile("source/jump.wav");
    v->sound = sfSound_create();
    sfSound_setBuffer(v->sound, v->buff);
    sfMusic_setLoop(v->warcraft, sfTrue);
    sfMusic_play(v->warcraft);
    window = create_window(1920, 1080);
    sfRenderWindow_setFramerateLimit(window, 120);
    help_cousin(v, window, event);
    destroy_things(v, window);
    return (window);
}

sfRenderWindow	*create_window(unsigned int w, unsigned int h)
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfEvent event;

    video_mode.width = w;
    video_mode.height = h;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create \
        (video_mode, "My_Runner", sfDefaultStyle, NULL);
    return (window);
}

int	main(int ac, char *av[])
{
    sfRenderWindow      *window;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        info();
        return (0);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'i'){
        window = set_sprites(window);
        return (0);
    } else
        return (0);
}
