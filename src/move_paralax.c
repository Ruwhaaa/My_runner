/*
** EPITECH PROJECT, 2018
** move_paralax.c
** File description:
** move paralax
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int move_paralax1(struct global *gb, struct init *in)
{
	in->position_plx1 = sfSprite_getPosition(gb->sprite_plx2);
	if (in->position_plx1.x != -1200) {
		sfSprite_move(gb->sprite_plx2, in->offset_plx2);
	}
	if (in->position_plx1.x == -1200) {
		sfSprite_setPosition(gb->sprite_plx2, in->position_plx_static1);
	}
	move_paralax2(gb, in);
	return (0);
}

int move_paralax2(struct global *gb, struct init *in)
{
	in->position_plx2 = sfSprite_getPosition(gb->sprite_plx3);
	if (in->position_plx2.x != -1200) {
		sfSprite_move(gb->sprite_plx3, in->offset_plx3);
	}
	if (in->position_plx2.x == -1200) {
		sfSprite_setPosition(gb->sprite_plx3, in->position_plx_static2);
	}
	move_paralax3(gb, in);
	return (0);
}

int move_paralax3(struct global *gb, struct init *in)
{
	in->position_plx3 = sfSprite_getPosition(gb->sprite_plx4);
	if (in->position_plx3.x != -1200) {
		sfSprite_move(gb->sprite_plx4, in->offset_plx4);
	}
	if (in->position_plx3.x == -1200) {
		sfSprite_setPosition(gb->sprite_plx4, in->position_plx_static3);
	}
	move_paralax4(gb, in);
	return (0);
}

int move_paralax4(struct global *gb, struct init *in)
{
	in->position_plx4 = sfSprite_getPosition(gb->sprite_plx5);
	if (in->position_plx4.x != -1200) {
		sfSprite_move(gb->sprite_plx5, in->offset_plx5);
	}
	if (in->position_plx4.x == -1200) {
		sfSprite_setPosition(gb->sprite_plx5, in->position_plx_static4);
	}
	move_paralax_land(gb, in);
	return (0);
}

int move_paralax_land(struct global *gb, struct init *in)
{
	in->position_plxL = sfSprite_getPosition(gb->sprite_land);
	if (in->position_plxL.x != -4000) {
		sfSprite_move(gb->sprite_land, in->offset_plxL);
	}
	if (in->position_plxL.x <= -4000) {
		sfSprite_setPosition(gb->sprite_land, in->position_plx_staticL);
	}
	return (0);
}
