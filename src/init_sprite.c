/*
** EPITECH PROJECT, 2018
** init_sprite.c
** File description:
** init sprite
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int init_sprite(struct global *gb, struct init *in)
{
	gb->sprite_plx1 = sfSprite_create();
	if (!gb->sprite_plx1)
		return (84);
	gb->sprite_plx2 = sfSprite_create();
	if (!gb->sprite_plx2)
		return (84);
	gb->sprite_plx3 = sfSprite_create();
	if (!gb->sprite_plx3)
		return (84);
	gb->sprite_land = sfSprite_create();
	if (!gb->sprite_land)
		return (84);
	init_sprite2(gb, in);
	return (0);
}

int init_sprite2(struct global *gb, struct init *in)
{
	gb->sprite_plx4 = sfSprite_create();
	if (!gb->sprite_plx4)
		return (84);
	gb->sprite_plx5 = sfSprite_create();
	if (!gb->sprite_plx5)
		return (84);
	gb->sprite_character = sfSprite_create();
	if (!gb->sprite_character)
		return (84);
	set_texture(gb, in);
	return (0);
}
int set_texture(struct global *gb, struct init *in)
{
	sfSprite_setTexture(gb->sprite_plx1, gb->texture_plx1, sfTrue);
	sfSprite_setTexture(gb->sprite_plx2, gb->texture_plx2, sfTrue);
	sfSprite_setTexture(gb->sprite_plx3, gb->texture_plx3, sfTrue);
	sfSprite_setTexture(gb->sprite_plx4, gb->texture_plx4, sfTrue);
	sfSprite_setTexture(gb->sprite_plx5, gb->texture_plx5, sfTrue);
	sfSprite_setTexture(gb->sprite_character, gb->texture_character, sfTrue);
	sfSprite_setTexture(gb->sprite_land, gb->texture_land, sfTrue);
	init(gb, in);
	process(gb, in);
	return (0);
}
