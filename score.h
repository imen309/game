#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include<SDL/SDL_ttf.h>

typedef struct Score
{
    SDL_Surface *text;//Surface du text
    SDL_Rect position;//Rectangle
    
    int nb;//le score
    TTF_Font *police;//police de l'ecriture du texte
    char scoretexte[20];
	
}Score;


void initialiser_score(Score *score);
void gererscore(Score *score, int collision);
void afficher_score (Score *score,SDL_Surface *ecran);


#endif 

