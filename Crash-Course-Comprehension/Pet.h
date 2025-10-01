//Pet.h
#ifndef PET_H
#define PET_H

#include <string>

using namespace std;

class Pet{
    public:
        // ----------- Constructors ------------
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);
        // ----------- Mutators -----------
        void updateName(string new_name);
        void updateAge(); //increments age by 1
        void updateOwner(string adopter);
        void setHouseTrained(); //set isHouseTrained to true
        // ----------- Accessor Functions ------------
        string getName() const;
        int getAge() const;
        string getOwner() const;
        bool getIsHouseTrained() const;
    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;
};
#endif