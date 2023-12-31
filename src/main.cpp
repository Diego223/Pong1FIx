#include "Game/Game.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

Game *game = NULL;

int main( int argc, char* args[] )
{
    game = new Game("Brand new game", SCREEN_WIDTH, SCREEN_HEIGHT);

    game->setup();

    while (game->running())
    {
      game->frameStart();
      game->handleEvents();
      game->update();
      game->render();
      game->frameEnd();
    }

    game->clean();

    return 0;
}