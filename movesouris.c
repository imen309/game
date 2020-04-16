#include "movesouris.h"

void deplacer_perso(SDL_Rect posperso)
{ SDL_Event event;
  int continuer = 1;

 while (continuer)
 {
    SDL_WaitEvent(&event);
    switch(event.type)
    {
        case SDL_QUIT:
            continuer = 0;
            break;
        case SDL_MOUSEMOTION:
            posperso.x = event.button.x;
            posperso.y = event.button.y;
            break;
    }
}
