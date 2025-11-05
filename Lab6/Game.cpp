#include "Game.h"
#include <random>
#include "RPG.h"
#include <iostream>

Game::Game()
{
}

/**
 * @brief creates up to n RPG pointers and updates names with ordering.
 * Populates live_players from 0 to n - 1 as all players are alive initially
 * 
 * @param n : number of players 
 */
void Game::generatePlayers(int n){
    for(int i = 0; i < n; i++)
    {
        players.push_back(new RPG());

        //rename players
        string new_name = "NPC_" + to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);
    }
}

int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() - 1);

    // Pick random index
    int randomIndex = dist(gen);

    // Advance iterator to that index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

void Game::endRound(RPG* winner, RPG* loser, int loserIndex){
    live_players.erase(loserIndex);
    winner->setHitsTaken(0);
    winner->updateExpLevel();
    cout << winner->getName() << " won against " << loser->getName() << endl;
}

void Game::battleRound(){
    int PlayerIndex1 = selectPlayer();
    int PlayerIndex2 = selectPlayer();
    /* Functionally the same as the recursive call, just more efficient (probably)
    while(PlayerIndex1 == PlayerIndex2){
        PlayerIndex1 = selectPlayer();
    }
    */
    if(PlayerIndex1 == PlayerIndex2){
        battleRound();
        return;
    }
    RPG *player1, *player2;
    player1 = players[PlayerIndex1];
    player2 = players[PlayerIndex2];
    while(player1->isAlive() && player2->isAlive()){
        player1->attack(player2);

        if(!player2->isAlive()){ //Implemented so you don't end up with two players dying same round
            break;
        }

        player2->attack(player1);
    }
    if(player1->isAlive()){
        endRound(player1, player2, PlayerIndex2);
    }
    else{
        endRound(player2, player1, PlayerIndex1);
    }
}

void Game::gameLoop(){
    while(live_players.size() != 1){
        battleRound();
    }
}

void Game::printFinalResults(){
    for(int i = 0; i < players.size(); i++){
        players[i]->printStats();
    }
}

Game::~Game()
{
}