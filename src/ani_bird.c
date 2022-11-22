/*
** EPITECH PROJECT, 2021
** init_thief.c
** File description:
** init main character and display sprite
*/

#include "all_lib.h"

void init_bird(bird_t *sprite)
{
    sprite->chara = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("assets/bird.png", NULL);
    sprite->rect.height = 33;
    sprite->rect.width = 33;
    sprite->rect.left = 0;
    sprite->rect.top = 0;
    sprite->scale.x = 3;
    sprite->scale.y = 3;
    sprite->pos.x = 0;
    sprite->pos.y = 630;
    sfSprite_setTexture(sprite->chara, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->chara, sprite->scale);
    sfSprite_setPosition(sprite->chara, sprite->pos);
    sfSprite_setTextureRect(sprite->chara, sprite->rect);
}

void disp_bird(GLOBAL_T *ALL, bird_t *sprite)
{
    sfSprite_setTextureRect(sprite->chara, sprite->rect);
    sfRenderWindow_drawSprite(ALL->settings.window, sprite->chara, NULL);
}

void ani_bird(bird_t *sprite, int offset, int max_value)
{
    if (sprite->rect.left + offset >= max_value)
        sprite->rect.left = 0;
    else
        sprite->rect.left += offset;
}