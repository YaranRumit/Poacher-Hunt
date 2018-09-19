#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>

#define weight 1920
#define height 1080

/*  ...............................................................Fonction.................................................................*/

void HandleEvent(SDL_Event event, int *quit){
  
  switch (event.type) {
    /* close button clicked */
  case SDL_QUIT:
    *quit = 1;
    break;
  }
}


int main( int argc, char* argv[] )
{
  SDL_Surface *screen;
  SDL_Init(SDL_INIT_VIDEO);
  
  /* set the title bar */
  SDL_WM_SetCaption("", "");
  
  /* create window */
  screen = SDL_SetVideoMode(weight,height, 0, 0);
  
  int game_over = 0;
  
/* ................................................................Boucle Jeux ...............................................................*/

  while(!game_over){
    
    SDL_Event event;
    
    if (SDL_PollEvent(&event)) {
      HandleEvent(event, &game_over);
    }
    
    SDL_UpdateRect(screen,0,0,0,0);
    
  }
    return 0;
}
