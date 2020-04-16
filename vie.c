#include "vie.h"


void initialiservie(vie *v)

	{
	v->nb=3;
	
        v->position.x = 380 ;

	v->position.y = 0 ;

	v->coeur0 = IMG_Load("0vie.png");

	v->coeur1 = IMG_Load("1vie.png");

	v->coeur2= IMG_Load("2vie.png");
	
        v->coeur3 = IMG_Load("3vie.png");

	v->coeur = IMG_Load("gameover.png");
	}

void affichervie(vie *v,SDL_Surface *ecran)
	
{
	if(v->nb==3)
	
{
	SDL_BlitSurface(v->coeur3,NULL, ecran,&v->position);
	
	}

	if(v->nb==2)
	
{
	SDL_BlitSurface(v->coeur2,NULL, ecran,&v->position);
	}

	if(v->nb==1)
	
{
	SDL_BlitSurface(v->coeur1,NULL, ecran,&v->position);
	}

	if(v->nb==0)
	
{
	SDL_BlitSurface(v->coeur0,NULL, ecran,&v->position);

	SDL_BlitSurface(v->coeur,NULL, ecran,&v->position);
	
	SDL_Flip(ecran);
	
	}

          
     }
