#ifndef VIE_H_INCLUDED
#define VIE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include<SDL/SDL_ttf.h>

typedef struct 
{ int nb;
  SDL_Rect position;
  SDL_Surface *coeur0;
  SDL_Surface *coeur1;
  SDL_Surface *coeur2;
  SDL_Surface *coeur3;
  SDL_Surface *coeur;
  

}vie;

void initialiservie(vie *v);
void affichervie(vie *v, SDL_Surface *ecran);


#endif 
