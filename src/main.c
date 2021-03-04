/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "runner.h"

int main(int argc, char **argv)
{
	int len = 0;

	if (argc == 1 || argc > 2) {
		return (84);
	}
	if (argc == 2) {
		while (argv[1][len] != '\0') {
			len ++;
		}
		parser(len, argv);
	}
	return (0);
}
