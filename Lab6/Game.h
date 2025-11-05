#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include <set>
#include "RPG.h"

using namespace std;

class Game{
    public: 
        //----------Constructors
        Game();
        //----------Mutators
        void generatePlayers(int n);
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
        //----------Accessors
        int selectPlayer();
        //----------Destructor
        ~Game();
    private:
        vector<RPG*> players;
        set<int> live_players;
};

#endif