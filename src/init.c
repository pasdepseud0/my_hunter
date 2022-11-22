/*
** EPITECH PROJECT, 2022
** init
** File description:
** desc
*/

#include "all_lib.h"

void init_window(GLOBAL_T *ALL)
{
    mini_printf("init Window\n");
    MODE.bitsPerPixel = 32;
    MODE.width = 1920;
    MODE.height = 1080;
    WIN = sfRenderWindow_create(MODE, "My Hunter", sfResize | sfClose, NULL);
}

void create_obj(GLOBAL_T *ALL, char* str, double sx, double sy, double px, double py)
{
    ALL->pictures[nb].texture = sfTexture_createFromFile(str, NULL);
    ALL->pictures[nb].sprite = sfSprite_create();
    ALL->pictures[nb].scale.x = sx;
    ALL->pictures[nb].scale.y = sy;
    ALL->pictures[nb].pos.x = px;
    ALL->pictures[nb].pos.y = py;
    nb++;
}

void init_sprite(GLOBAL_T *ALL)
{
    nb = 0;
    ALL->pictures = malloc(sizeof(ALL->pictures->sprite) * 100);

    create_obj(ALL, "assets/menu.jpg", 1.12, 1.12, 0, 0);           //0
    create_obj(ALL, "assets/start-button.png", 10, 10, 800, 500);   //1
    create_obj(ALL, "assets/floor.png", 3, 3, 0, 800);              //2
    create_obj(ALL, "assets/cloud.png", 0.75, 0.75, 2100, 100);     //3
    create_obj(ALL, "assets/bird.png", 3, 3, 170, 750);         //4

    ALL->pictures[nb].sprite = sfSprite_create();
    ALL->pictures[4].rect.height = 26;
    ALL->pictures[4].rect.width = 34;
    ALL->pictures[4].rect.left = 0;
    ALL->pictures[4].rect.top = 0;
    ALL->pictures[nb].origin.x = 50;
    ALL->pictures[nb].origin.y = 50;
}

void applied(GLOBAL_T *ALL)
{
    for (int i = 0; i <= nb; i++) {
        sfSprite_setPosition(ALL->pictures[i].sprite, ALL->pictures[i].pos);
        sfSprite_setScale(ALL->pictures[i].sprite, ALL->pictures[i].scale);
        sfSprite_setTextureRect(ALL->pictures[4].sprite, ALL->pictures[4].rect);
        sfSprite_setOrigin(ALL->pictures[i].sprite, ALL->pictures[i].origin);
        sfSprite_setTexture(ALL->pictures[i].sprite, ALL->pictures[i].texture,
                            sfTrue);
        printf("sprite:%d:%f:%f:applied\n", i, ALL->pictures[i].pos.x, ALL->pictures[i].pos.y);
    }
}

void init (GLOBAL_T *ALL)
{
    init_window(ALL);
    init_sprite(ALL);
    applied(ALL);
}
