/*
** EPITECH PROJECT, 2017
** animation.c
** File description:
** animation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int clock(struct global *gb, struct init *in)
{
	gb->time = sfClock_getElapsedTime(gb->clock);
	gb->seconds = gb->time.microseconds / 10000.0;
	if (gb->seconds > 5) {
		move_rect(gb, in);
		sfClock_restart(gb->clock);
	}
	return (0);
}

int move_rect(struct global *gb, struct init *in)
{
	if (in->rect.left != 1200) {
		in->rect.left += 150;
	}
	if (in->rect.left == 1200) {
		in->rect.left = 0;
	}
	sfSprite_setTextureRect(gb->sprite_character, in->rect);
	return (0);
}

int move(struct global *gb, struct init *in)
{
	sfSprite_setPosition(gb->sprite_character, in->position);
	clock(gb, in);
	return (0);
}
