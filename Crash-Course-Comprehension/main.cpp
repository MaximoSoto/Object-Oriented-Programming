//main.cpp
#include <iostream>
#include <string>
#include "Pet.h" 

using namespace std;

int main()
{
    Pet unknown = Pet(); //Default constructor call
    cout << "Name: " << unknown.getName() << endl;
    cout << "Age: " << unknown.getAge() << endl;
    cout << "Owner: " << unknown.getOwner() << endl;
    cout << "Is House Trained: " << (unknown.getIsHouseTrained()? "Yes" : "No") << endl;

    cout << endl;

    Pet Loki = Pet("Loki", 5, "Maximo", 0);
    cout << "Name: " << Loki.getName() << endl;
    cout << "Age: " << Loki.getAge() << endl;
    cout << "Owner: " << Loki.getOwner() << endl;
    cout << "Is House Trained: " << (Loki.getIsHouseTrained()? "Yes" : "No") << endl;

    Loki.updateName("Thor");
    Loki.updateAge();
    Loki.updateOwner("Marcos");
    Loki.setHouseTrained();

    cout << endl;

    cout << "Name: " << Loki.getName() << endl;
    cout << "Age: " << Loki.getAge() << endl;
    cout << "Owner: " << Loki.getOwner() << endl;
    cout << "Is House Trained: " << (Loki.getIsHouseTrained()? "Yes" : "No") << endl;
}