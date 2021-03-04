/*
** EPITECH PROJECT, 2018
** init_paralax.c
** File description:
** paralax
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "runner.h"

int paralax(struct global *gb, struct init *in)
{
	gb->texture_plx1 = sfTexture_createFromFile("Assets/plx-1.png", NULL);
	if (!gb->texture_plx1)
		return (84);
	gb->texture_plx2 = sfTexture_createFromFile("Assets/plx-2.png", NULL);
	if (!gb->texture_plx2)
		return (84);
	gb->texture_plx3 = sfTexture_createFromFile("Assets/plx-3.png", NULL);
	if (!gb->texture_plx3)
		return (84);
	gb->texture_plx4 = sfTexture_createFromFile("Assets/plx-4.png", NULL);
	if (!gb->texture_plx4)
		return (84);
	gb->texture_plx5 = sfTexture_createFromFile("Assets/plx-5.png", NULL);
	if (!gb->texture_plx5)
		return (84);
	gb->texture_land = sfTexture_createFromFile("Assets/tile.png", NULL);
	if (!gb->texture_land)
		return (84);
	init_sprite(gb, in);
	return (0);
}
