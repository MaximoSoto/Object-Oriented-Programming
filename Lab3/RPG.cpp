//RPG.cpp
#include <iostream>
#include <string>
#include "RPG.h"

// ---------- Constructors ----------
/**
 * @brief Construct a new RPG::RPG object
 * 
 */
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

/**
 * @brief Construct a new RPG::RPG object
 * 
 * @param name 
 * @param hits_taken 
 * @param luck 
 * @param exp 
 * @param level 
 */
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this-> name = name;
    this-> hits_taken = hits_taken;
    this-> luck = luck;
    this -> exp = exp;
    this -> level = level;
}

// --------- Mutators ----------
/**
 * @brief Sets hits_taken to new_hits
 * 
 * @param new_hits 
 */
void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

/**
 * @brief Returns whether hits_taken is less than MAX_HITS_TAKEN
 * 
 * @return true 
 * @return false 
 */
bool RPG::isAlive() const{
    if(MAX_HITS_TAKEN >= hits_taken)
        return false; // Player is dead
    else
        return true; // Player is alive
}

// ---------- Accessor Functions ----------
/**
 * @brief return name
 * 
 * @return string 
 */
string RPG::getName() const{
    return name;
}

/**
 * @brief return hits_taken
 * 
 * @return int 
 */
int RPG::getHitsTaken() const{
    return hits_taken;
}

/**
 * @brief return luck
 * 
 * @return float 
 */
float RPG::getLuck() const{
    return luck;
}

/**
 * @brief return exp
 * 
 * @return float 
 */
float RPG::getExp() const{
    return exp;
}

/**
 * @brief return level
 * 
 * @return int 
 */
int RPG::getLevel() const{
    return level;
}