#include <iostream>
#include <random>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main()
{
    Game g1 = Game();
    int num_players = 10;
    g1.generatePlayers(num_players);
    g1.gameLoop();
    g1.printFinalResults();
}