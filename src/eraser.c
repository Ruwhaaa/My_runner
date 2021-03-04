/*
** EPITECH PROJECT, 2017
** eraser.c
** File description:
** eraser
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

void clean_sprite(struct global *gb)
{
	sfRenderWindow_clear(gb->window, sfBlack);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_plx1, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_plx2, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_plx3, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_plx4, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_plx5, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_character, NULL);
	sfRenderWindow_drawSprite(gb->window, gb->sprite_land, NULL);
	sfRenderWindow_display(gb->window);
}

void clean_all(struct global *gb, struct init *in)
{
	sfSprite_destroy(gb->sprite_plx1);
	sfSprite_destroy(gb->sprite_plx2);
	sfSprite_destroy(gb->sprite_plx3);
	sfSprite_destroy(gb->sprite_plx4);
	sfSprite_destroy(gb->sprite_plx5);
	sfSprite_destroy(gb->sprite_character);
	sfSprite_destroy(gb->sprite_land);
	sfTexture_destroy(gb->texture_plx1);
	sfTexture_destroy(gb->texture_plx2);
	sfTexture_destroy(gb->texture_plx3);
	sfTexture_destroy(gb->texture_plx4);
	sfTexture_destroy(gb->texture_plx5);
	sfTexture_destroy(gb->texture_character);
	sfTexture_destroy(gb->texture_land);
	sfRenderWindow_destroy(gb->window);
	free(gb);
	free(in);
}
