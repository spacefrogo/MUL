/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** my_runner
*/

#include "my.h"

void	set_sprites(sfRenderWindow *window)
{
    sfClock *clock = sfClock_create();
    draw_sprite_t	*v = malloc(sizeof(draw_sprite_t));
    draw_sprite_t	*b = malloc(sizeof(draw_sprite_t));
    
    v = sprites();
    b = sprites_2();
    while (sfRenderWindow_isOpen(window)) {
        redo_it(window, v, b);
        close_window(window, v, b);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}

int	close_window(sfRenderWindow *window, draw_sprite_t *v, draw_sprite_t *b)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.key.code == sfKeyEscape) 
            set_sprites(window);
        if (event.key.code == sfKeyP) {
            v->rectb.width = 1000;
            sfSprite_setTextureRect(v->s_background, v->rectb);
        }
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        set_menu(v, b, event);
    }
}

sfRenderWindow	*create_window(unsigned int w, unsigned int h)
{
    sfVideoMode video_mode;
    sfRenderWindow *window;

    video_mode.width = w;
    video_mode.height = h;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create \
    (video_mode, "My_Runner", sfDefaultStyle, NULL);
    return (window);
}

int	main(int ac, char *av[])
{
    sfRenderWindow      *window = create_window(1000, 667);

    if (ac == 1) {
        sfRenderWindow_setFramerateLimit(window, 120);
        set_sprites(window);
        return (0);
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        info();
        return (0);
    }
}
