/*
** EPITECH PROJECT, 2018
** info
** File description:
** info
*/

#include "my.h"

void	info(void)
{
    my_putstr("\t__________________________");
    my_putstr("\n\tGame: My Runner info\n");
    my_putstr("\n\t__________________________");
    my_putstr("\n");
    my_putstr("\n\tHOW DOES IT WORK ?");
    my_putstr("\n\tThe goal of the game is to run.");
    my_putstr("\n\tFor how to play this game, you have to run and escape");
    my_putstr(" the difficulties!.\n");
    my_putstr("\n\n");
}

void	help_bros(draw_sprite_t *v)
{
    if (v->seconds > 0.005)
        do_movement(v);
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
        v->p_man = get_position(0, 500);
        sfSound_play(v->sound);
    }
    else
        v->p_man = get_position(0, 695);
}

void	help_sisters(draw_sprite_t *v)
{
    sfSprite_setTextureRect(v->s_man, v->rec);
    sfSprite_setTextureRect(v->s_snowman, v->rec2);
    sfClock_restart(v->clock);
}

void	help_cousin(draw_sprite_t *v, sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_isOpen(window)) {
        v->time = sfClock_getElapsedTime(v->clock);
        v->seconds = v->time.microseconds / 1000000.0;
        if (v->seconds > 0.1999) {
            v->i++;
            v->j++;
            v->rec2 = get_rec(0, 220, 110, 110);
            v->rec = get_rec(0, 199.75, 110, 110);
            if (v->j == 2) {
                v->rec2 = get_rec(0, 0, 110, 110);
                v->j = 0;
            }
            if (v->i == 3) {
                v->rec = get_rec(0, 0, 110, 110);
                v->i = 0;
            }
            help_sisters(v);
        }
        help_part2(v, window, event);
    }
}

void	help_part2(draw_sprite_t *v, sfRenderWindow *window, sfEvent event)
{
    help_bros(v);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.key.code == sfKeyEscape || event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    }
    draw_things(v, window);
}
