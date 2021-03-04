/*
** EPITECH PROJECT, 2017
** init.c
** File description:
** initialisation of the structure function
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

void init(struct global *gb, struct init *in)
{
	in->rect.top = 0;
	in->rect.left = 0;
	in->rect.width = 150;
	in->rect.height = 150;
	sfSprite_setTextureRect(gb->sprite_character, in->rect);
	in->position.x = 150;
	in->position.y = 490;
	in->scale.x = 1;
	in->scale.y = 1;
	in->mark = 1;
	in->score = 0;
	in->mouse_pos.x = 0;
	in->mouse_pos.y = 0;
	init_offset(gb, in);
}

void init_offset(struct global *gb, struct init *in)
{
	in->offset_plx2.x = -0.5;
	in->offset_plx2.y = 0;
	in->offset_plx3.x = -1;
	in->offset_plx3.y = 0;
	in->offset_plx4.x = -1.5;
	in->offset_plx4.y = 0;
	in->offset_plx5.x = -2;
	in->offset_plx5.y = 0;
	in->offset_plxL.x = -3;
	in->offset_plxL.y = 0;
	init_position(gb, in);
}

void init_position(struct global *gb, struct init *in)
{
	in->position_plx1.x = 0;
	in->position_plx1.y = 0;
	in->position_plx2.x = 0;
	in->position_plx2.y = 0;
	in->position_plx3.x = 0;
	in->position_plx3.y = 0;
	in->position_plx4.y = 0;
	in->position_plx4.x = 0;
	in->position_plx5.x = 0;
	in->position_plx5.y = 0;
	in->position_plxL.x = 0;
	in->position_plxL.y = 625;
	position_static(gb, in);
}

void position_static(struct global *gb, struct init *in)
{
	in->position_plx_static1.x = 0;
	in->position_plx_static1.y = 0;
	in->position_plx_static2.x = 0;
	in->position_plx_static2.y = 0;
	in->position_plx_static3.x = 0;
	in->position_plx_static3.y = 0;
	in->position_plx_static4.x = 0;
	in->position_plx_static4.y = 0;
	in->position_plx_static5.x = 0;
	in->position_plx_static5.y = 0;
	in->position_plx_staticL.x = 0;
	in->position_plx_staticL.y = 625;
	sfSprite_setPosition(gb->sprite_land, in->position_plx_staticL);
}
