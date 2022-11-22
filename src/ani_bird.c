/*
** EPITECH PROJECT, 2021
** init_thief.c
** File description:
** init main character and display sprite
*/

#include "all_lib.h"

void init_bird(GLOBAL_T *ALL)
{
    IMG->sprite = sfSprite_create();
    IMG->texture = sfTexture_createFromFile("assets/bird.png", NULL);
    IMG->rect.height = 33;
    IMG->rect.width = 33;
    IMG->rect.left = 0;
    IMG->rect.top = 0;
    IMG->scale.x = 3;
    IMG->scale.y = 3;
    IMG->pos.x = 0;
    IMG->pos.y = 630;
    sfSprite_setTexture(IMG->sprite, IMG->texture, sfTrue);
    sfSprite_setScale(IMG->sprite, IMG->scale);
    sfSprite_setPosition(IMG->sprite, IMG->pos);
    sfSprite_setTextureRect(IMG->sprite, IMG->rect);
}

void disp_bird(GLOBAL_T *ALL)
{
    sfSprite_setTextureRect(IMG->sprite, IMG->rect);
    sfRenderWindow_drawSprite(ALL->settings.window, IMG->sprite, NULL);
}

void ani_bird(GLOBAL_T *ALL, int offset, int max_value)
{
    if (IMG->rect.left + offset >= max_value)
        IMG->rect.left = 0;
    else
        IMG->rect.left += offset;
}
