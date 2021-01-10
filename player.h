#ifndef PLAYER_H
#define PLAYER_H
#include "grid.h"

#include <iostream>


class player
{
    public:
        player(){
            mark(1,1);

        }

         void mark(int x, int y){

    drawer.putToken(playerX,1,1);

        }

    private:
        char playerX='X';
        char PlayerY='O';
        grid drawer;

};

#endif // PLAYER_H
