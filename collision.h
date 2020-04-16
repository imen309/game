#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include<SDL/SDL_ttf.h>

void load_background();
SDL_Color GetPixel(SDL_Surface *surface,int x,int y);
int collision_Parfaite(SDL_Surface *masque,SDL_Surface *perso,SDL_Rect posperso,int direction);



#endif 





