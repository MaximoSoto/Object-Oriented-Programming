// Pokemon.h
#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>
using namespace std;

class Pokemon{
    public:
        // ----------- Constructors ------------
        Pokemon();
        Pokemon(string name, int hp, int attack, int defense, vector<string> type);
        // ----------- Mutators ------------
        void speak();
        void printStats();
        // ----------- Accessors ------------
    
    protected:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;
};
#endif