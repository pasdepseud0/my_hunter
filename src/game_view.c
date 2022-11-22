/*
** EPITECH PROJECT, 2022
** game_function
** File description:
** desc
*/

#include "all_lib.h"

void draw(GLOBAL_T *ALL)
{
    sfRenderWindow_clear(WINDOW, sfCyan);
    sfRenderWindow_drawSprite(WINDOW, IMG[2].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[3].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[4].sprite, NULL);
    sfRenderWindow_display(WINDOW);
}

static void jump (GLOBAL_T *ALL)
{
    if (EVENT.type == sfEvtMouseButtonPressed && IMG[4].pos.y == 750) {
        IMG[4].pos.y = 500;
        sfSprite_setPosition(IMG[4].sprite, IMG[4].pos);
    } else if (IMG[4].pos.y != 750) {
        IMG[4].pos.y += 2;
        sfSprite_setPosition(IMG[4].sprite, IMG[4].pos);
    }
}

void bird_ani(GLOBAL_T *ALL, int offset, int max_value)
{
    if (ALL->pictures->rect.left + offset >= max_value)
        ALL->pictures->rect.left = 0;
    else
        ALL->pictures->rect.left += offset;
}

static floor_animation(GLOBAL_T *ALL)
{
    // IMG[2].pos.x = IMG[2].pos.x - 1;
    IMG[3].pos.x = IMG[3].pos.x - 2;
    sfSprite_setPosition(IMG[2].sprite, IMG[2].pos);
    if (IMG[2].pos.x <= -2100)
        IMG[2].pos.x = 2100;
    sfSprite_setPosition(IMG[3].sprite, IMG[3].pos);
    if (IMG[3].pos.x <= -2100)
        IMG[3].pos.x = 2100;
}

void game_function(GLOBAL_T *ALL)
{
    float orientation = 35;
    sfWindow_setFramerateLimit(WINDOW, 100);

    while (sfRenderWindow_isOpen(WINDOW)) {
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            if (EVENT.type == sfEvtClosed) {
                sfRenderWindow_close(WINDOW);
            }
        }
        orientation++;
        sfSprite_setRotation(IMG[4].sprite, orientation);
        draw(ALL);
        jump(ALL);
        floor_animation(ALL);
    }
}
