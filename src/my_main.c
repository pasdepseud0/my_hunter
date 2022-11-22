/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include "all_lib.h"

static void if_click(GLOBAL_T *ALL)
{
    int i = 0;
    sfVector2i mouse = sfMouse_getPosition(WINDOW);

    if (mouse.x >= 816 && mouse.x <= 1062)
        if (mouse.y >= 526 && mouse.y <= 594)
            i = 1;
    if (EVENT.type == sfEvtMouseButtonPressed && i)
        game_function(ALL);
}

static void play (GLOBAL_T *ALL)
{
    bird_t *sprite = malloc(sizeof(bird_t));
    init_bird(sprite);

    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            if (EVENT.key.code == sfKeyEscape)
                sfRenderWindow_close(WINDOW);
            if (EVENT.type == sfEvtClosed) {
                sfRenderWindow_close(WINDOW);
            }
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        sfRenderWindow_drawSprite(ALL->settings.window, ALL->pictures[0].sprite,
                                    NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[1].sprite, NULL);
        sfRenderWindow_display(WINDOW);
        ani_bird(ALL, 34, 100);

        if_click(ALL);
    }
}

int main (void)
{
    GLOBAL_T ALL;

    init(&ALL);
    play(&ALL);
    return 0;
}

