/*
** EPITECH PROJECT, 2018
** jump
** File description:
** jumping recognition and gestion
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int jump(struct global *gb, struct init *in)
{
	int retenue = 1;

	if (in->position.y >= 290 && retenue == 1) {
		sfSprite_setPosition(gb->sprite_character, in->position);
		in->position.y = in->position.y -10;
		if (in->position.y <= 290) {
			retenue = 0;
		}
	}
	if (retenue == 0) {
		sfSprite_setPosition(gb->sprite_character, in->position);
		in->position.y = in->position.y + 10;
		if (in->position.y >= 490) {
			retenue = 1;
		}
	}
	return (0);
}
