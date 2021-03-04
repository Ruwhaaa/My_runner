/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct + my
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef LIST_H_
#define LIST_H_

struct global
{
	sfRenderWindow *window;
	sfTexture *texture_plx1;
	sfTexture *texture_plx2;
	sfTexture *texture_plx3;
	sfTexture *texture_plx4;
	sfTexture *texture_plx5;
	sfTexture *texture_character;
	sfTexture *texture_land;
	sfSprite *sprite_plx1;
	sfSprite *sprite_plx2;
	sfSprite *sprite_plx3;
	sfSprite *sprite_plx4;
	sfSprite *sprite_plx5;
	sfSprite *sprite_character;
	sfSprite *sprite_land;
	sfEvent event;
	float seconds;
	sfClock *clock;
	sfTime time;
	sfMusic *music;
	sfMusic *music2;
};

struct init
{
	sfIntRect rect;
	sfVector2f posy;
	sfVector2f offset_plx2;
	sfVector2f offset_plx3;
	sfVector2f offset_plx4;
	sfVector2f offset_plx5;
	sfVector2f offset_plxL;
	sfVector2f position;
	sfVector2f position_plx1;
	sfVector2f position_plx2;
	sfVector2f position_plx3;
	sfVector2f position_plx4;
	sfVector2f position_plx5;
	sfVector2f position_plxL;
	sfVector2f position_plx_static1;
	sfVector2f position_plx_static2;
	sfVector2f position_plx_static3;
	sfVector2f position_plx_static4;
	sfVector2f position_plx_static5;
	sfVector2f position_plx_staticL;
	sfVector2f scale;
	sfVector2i mouse_pos;
	int score;
	int mark;
	int hearth;
};

int my_putstr(char const *str);
void my_putchar(char c);
int process(struct global *gb, struct init *in);
void clean_sprite(struct global *gb);
void clean_all(struct global *gb, struct init *in);
int move_rect(struct global *gb, struct init *in);
int clock(struct global *gb, struct init *in);
int move(struct global *gb, struct init *in);
void init(struct global *gb, struct init *in);
int mouse2(struct global *gb, struct init *in);
int error(struct global *gb, struct init *in);
int initialisation_texture_sprite(struct global *gb, struct init *in);
int init_sprite(struct global *gb, struct init *in);
int set_texture(struct global *gb, struct init *in);
int paralax(struct global *gb, struct init *in);
int move_paralax1(struct global *gb, struct init *in);
int move_paralax2(struct global *gb, struct init *in);
int move_paralax3(struct global *gb, struct init *in);
int move_paralax4(struct global *gb, struct init *in);
void init_offset(struct global *gb, struct init *in);
void init_position(struct global *gb, struct init *in);
void position_static(struct global *gb, struct init *in);
int init_sprite2(struct global *gb, struct init *in);
int move_paralax_land(struct global *gb, struct init *in);
int primer_initialisation();
int parser(int len, char **argv);
int file();
int map_recognition(char **argv);
int jump(struct global *gb, struct init *in);

#endif /* !LIST_H_ */
