//RPG.h
#ifndef RPG_H
#define RPG_H

#include <string>

using namespace std;
const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG{
    public:
        // ----------- Constructors ------------
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);
        // ----------- Mutators ------------
        bool isAlive() const;
        void setHitsTaken(int new_hits);
        void updateHitsTaken();
        void setName(string name);
        void updateExpLevel();
        void attack(RPG* opponent);
        void printStats();
        // ----------- Accessor Functions ------------
        string getName() const;
        int getHitsTaken() const;
        float getLuck() const;
        float getExp() const;
        int getLevel() const;
        // ----------- Destructor ------------
        ~RPG();

    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;
};
#endif