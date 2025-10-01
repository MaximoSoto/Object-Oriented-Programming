//Pet.cpp
#include <iostream>
#include <string>
#include "Pet.h"

/**
 * @brief Construct a new Pet:: Pet object
 * 
 */
Pet::Pet(){
    name = "";
    age = 0;
    owner = "";
    isHouseTrained = false;
}

/**
 * @brief Construct a new Pet:: Pet object
 * 
 * @param name 
 * @param age 
 * @param owner 
 * @param isHouseTrained 
 */
Pet::Pet(string name, int age, string owner, bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

/**
 * @brief Update name of pet
 * 
 * @param new_name 
 */
void Pet::updateName(string new_name)
{
    name = new_name;
}

/**
 * @brief Increment pet age
 * 
 */
void Pet::updateAge()
{
    age++;
}

/**
 * @brief Update owner of pet
 * 
 * @param adopter 
 */
void Pet::updateOwner(string adopter)
{
    owner = adopter;
}

/**
 * @brief Set IsHouseTrained to true
 * 
 */
void Pet::setHouseTrained()
{
    isHouseTrained = true;
}

/**
 * @brief return name
 * 
 * @return string 
 */
string Pet::getName() const{
    return name;
}

/**
 * @brief return age
 * 
 * @return int 
 */
int Pet::getAge() const{
    return age;
}

/**
 * @brief return owner
 * 
 * @return string 
 */
string Pet::getOwner() const{
    return owner;
}

/**
 * @brief return isHouseTrained
 * 
 * @return true 
 * @return false 
 */
bool Pet::getIsHouseTrained() const{
    return isHouseTrained;
}