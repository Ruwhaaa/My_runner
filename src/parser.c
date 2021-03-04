/*
** EPITECH PROJECT, 2018
** parser.c
** File description:
** parser
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "runner.h"

int parser(int len, char **argv)
{
	char *compare;
	compare = malloc(sizeof(char) * 10);
	compare = "./map/map1";
	int index = 0;
	int compteur = 0;

	while (argv[1][0] == '-' && len == 2) {
		if (argv[1][index] == 'h') {
			file();
			break;
		}
		index = index + 1;
	}
	while (argv[1][0] == '.' && len == 10) {
		if (compare[index] == argv[1][index]) {
			compteur = compteur + 1;
		}
		if (compteur == 10) {
			map_recognition(argv);
			break;
		}
		index = index + 1;
	}
	return (0);
}

int file()
{
	int reader = 10;
	int read_size = 10000;
	int fd = 0;
	char *buffer;
	char *file;
	file = malloc(sizeof(char) * 30);
	file = "./file/file";
	buffer = malloc(sizeof(char) * 10000);
	fd = open(file, O_RDONLY);

	while (reader != 0) {
		reader = read(fd, buffer, read_size);
	}
	printf("%s\n" ,buffer);
	return (0);
}

int map_recognition(char **argv)
{
	int fd;
	char *buffer;
	buffer = malloc(sizeof(char) * 10000);

	fd = open(argv[1], O_RDONLY);
	read(fd, buffer, 10000);
	primer_initialisation();
	return (0);
}
