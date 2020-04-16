#include"score.h"

void initialiser_score(Score *score)
{
  score->nb=0;
  score->positionfinale.x=600;
  score->positionfinale.y=450;
  score->position.x=200;
  score->position.y=40;
  score->police=TTF_OpenFont("angelina.ttf",50);
  SDL_Color couleur ={90,110,45};
  
}

void gererscore(Score *score, int collision)
{ 
  if(collision==0)
     score->nb++;
  else
     score->nb--;
}

void afficher_score (Score *score,SDL_Surface *ecran)
{
  sprintf(score->scoretexte,"%d",score->nb);
  score->text=TTF_RenderText_Blended(score->police,score->scoretexte,couleur);
  SDL_BlitSurface(score->text,NULL,ecran,&score->position);
}
