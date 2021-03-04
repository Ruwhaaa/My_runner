/*
** EPITECH PROJECT, 2018
** primer_initialisation.c
** File description:
** primer_initialisation
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int primer_initialisation()
{
	struct global *gb = NULL;
	gb = malloc(sizeof(*gb));
	if (!gb)
		return (84);
	struct init *in = NULL;
	in = malloc(sizeof(*in));
	if (!in)
		return (84);
	sfVideoMode mode = {1200, 675, 32};

	gb->clock = sfClock_create();
	gb->window = sfRenderWindow_create(mode, "My Runner", sfResize | sfClose, NULL);
	if (!gb->window)
		return (84);
	initialisation_texture_sprite(gb, in);
	return (0);
}

int initialisation_texture_sprite(struct global *gb, struct init *in)
{;
	gb->texture_character = sfTexture_createFromFile("Assets/knight.png", NULL);
	if (!gb->texture_character)
		return (84);
	paralax(gb, in);
	return(0);
}

int process(struct global *gb, struct init *in)
{
	sfRenderWindow_setFramerateLimit(gb->window, 60);
	while (sfRenderWindow_isOpen(gb->window)) {
		move_paralax1(gb, in);
		move(gb, in);
		while (sfRenderWindow_pollEvent(gb->window, &gb->event)) {
			if (gb->event.type == sfEvtKeyPressed) {
				jump(gb, in);
			}
			if (gb->event.type == sfEvtClosed) {
				sfRenderWindow_close(gb->window);
			}
		}
		clean_sprite(gb);
	}
	clean_all(gb, in);
	return (0);
}
