#include "collision.h"

void load_background()
{ SDL_Surface *surface=SDL_LoadBMP("background.bmp");
  SDL_Surface *masque=SDL_LoadBMP("backgroundmasque.bmp");
 }

SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;

	//determine position
	char* pPosition = ( char* ) surface->pixels ;

	//offset by y
	pPosition += ( surface->pitch * y ) ;

	//offset by x
	pPosition += ( surface->format->BytesPerPixel * x ) ;

	//copy pixel data
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;

	//convert color
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
	return ( color ) ;
}



int collision_Parfaite(SDL_Surface *masque,SDL_Surface *perso,SDL_Rect posperso,int direction)
{

  SDL_Color col;
  if(direction==0)//right
  {
    col=GetPixel(masque,posperso.x+perso->w ,posperso.y+(perso->h/2));
  }
else  if(direction==1)//left
  {
    col=GetPixel(masque,posperso.x ,posperso.y+(perso->h/2));
  }
else  if(direction==2)//up
  {
    col=GetPixel(masque,posperso.x+(perso->w/2) ,posperso.y);
  }
else  if(direction==3)//down
  {
    col=GetPixel(masque,posperso.x+(perso->w/2),posperso.y+perso->h );
  }
  
if ((col.r==151)&&(col.b==237)&&(col.g==217))
{
	printf("collision \n");
  return 1;
}
else 
{
	printf("pas de collision \n");
	return 0;
}
}
