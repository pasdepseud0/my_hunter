/*
** EPITECH PROJECT, 2022
** STRUCT_H_
** File description:
** desc
*/

#ifndef STRUCT_H_
    # define STRUCT_H_

    #include <stdio.h>
    #include "struct.h"
    #include <stdlib.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics/Rect.h>

    typedef struct PARAMETER {
        sfVideoMode mode;
        sfRenderWindow* window;
        sfEvent event;
        int img_n;
    } PARAMETER_T;

    typedef struct IMG {
        sfTexture *texture;
        sfSprite *sprite;
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f pos;
        sfVector2f size;
        sfVector2f origin;
    } IMG_T;

    typedef struct GLOBAL {
        PARAMETER_T settings;
        IMG_T *pictures;
    } GLOBAL_T;

    typedef struct //perso
    {
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f scale;
    sfSprite *sprite;
    sfVector2f pos;
    } bird_t;

    void game_function(GLOBAL_T *ALL);
    void init (GLOBAL_T *ALL);

    #define sfCf sfTexture_createFromFile
    #define sfWc sfRenderWindow_create

    #define WIN ALL->settings.window
    #define MODE ALL->settings.mode
    #define nb ALL->settings.img_n

    #define WINDOW ALL->settings.window
    #define EVENT ALL->settings.event
    #define IMG ALL->pictures

#endif
