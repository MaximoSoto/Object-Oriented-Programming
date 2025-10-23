// Pokemon.cpp
#include <string>
#include <vector>
#include <iostream>
#include "Pokemon.h"

// ----------- Constructors ------------
/**
 * @brief Construct a new Pokemon:: Pokemon object
 * 
 */
Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon)\n";
}
/**
 * @brief Construct a new Pokemon:: Pokemon object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param type 
 */
Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    type = type;
    cout << "Overloaded Constructor (Pokemon)\n";
}
// ----------- Mutators ------------
/**
 * @brief says whatever this pokemon normally says
 * 
 */
void speak(){
    cout << "...\n";
}
void Pokemon::printStats(){
    cout << "name: " << name << endl;
    cout << "HP: " << hp << endl;
    cout << "Attack: " << attack << endl;
    cout << "defense: " << defense << endl;
    cout << "Type: ";
    for(int i = 0; i <type.size(); i++){
        cout << type[i] << "    ";
    }
    cout << endl;
}