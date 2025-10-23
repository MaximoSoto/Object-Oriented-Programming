// Charmander.h
#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon{
    public:
        // ----------- Constructors ------------
        Charmander();
        Charmander(string name, int hp, int attack, int defense, vector<string> type);
        // ----------- Mutators ------------
        void speak();
        void printStats();
        // ----------- Accessors ------------

    private:
        vector<string> skills;
        /* name, hp, attack, defense */
};

#endif