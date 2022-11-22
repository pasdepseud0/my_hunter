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

    typedef struct {
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f scale;
    sfSprite *chara;
    sfVector2f pos;
    } bird_t;

    typedef struct GLOBAL {
        PARAMETER_T settings;
        IMG_T *pictures;
    } GLOBAL_T;

    void bird_flip(GLOBAL_T *ALL);
    void init (GLOBAL_T *ALL);

    void init_bird(GLOBAL_T *ALL);
    void disp_bird(GLOBAL_T *ALL);
    void ani_bird(GLOBAL_T *ALL, int offset, int max_value);

    #define sfCf sfTexture_createFromFile
    #define sfWc sfRenderWindow_create

    #define WIN ALL->settings.window
    #define MODE ALL->settings.mode
    #define nb ALL->settings.img_n

    #define WINDOW ALL->settings.window
    #define EVENT ALL->settings.event
    #define IMG ALL->pictures

#endif
