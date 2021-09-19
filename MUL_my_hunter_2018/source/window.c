/*
** EPITECH PROJECT, 2018
** window
** File description:
** window
*/

#include "my.h"

void    draw_sprite(sfRenderWindow *window, sfClock *clock);

sfRenderWindow  *set_sprites(sfRenderWindow *window)
{
    sfEvent event;
    sfClock *clock = sfClock_create();

    play_sound();
    window = create_window(1280, 769);
    sfRenderWindow_setFramerateLimit(window, 90);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        draw_sprite(window, clock);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (window);
}

void	play_sound(void)
{
    sfSoundBuffer *soundbuffer;
    sfSound *sound;

    soundbuffer = sfSoundBuffer_createFromFile("Mallard Duck Call-SoundBible.com-433679284.wav");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSoundBuffer_destroy(soundbuffer);
}

sfRenderWindow  *create_window(unsigned int width, unsigned int height)
{
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfEvent event;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My_Hunter", sfDefaultStyle, NULL);
    return (window);
}

int     main(int ac, char *av[])
{
    sfRenderWindow      *window;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        info();
        return (0);
    } else {
        window = set_sprites(window);
        return (0);
    }
}
