#include <iostream>
#include <string>
#include "RPG.h"

using namespace std;

int main()
{
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    cout << "Current Stats\n" << p1.getName() << ":\n";
    cout << "Hits Taken: " << p1.getHitsTaken() << "        Luck: "; 
    cout << p1.getLuck() << "        Exp: " << p1.getExp() << "        Level: " << p1.getLevel() << endl << endl;

    cout << "Current Stats\n" << p2.getName() << ":\n";
    cout << "Hits Taken: " << p2.getHitsTaken() << "        Luck: "; 
    cout << p2.getLuck() << "        Exp: " << p2.getExp() << "        Level: " << p2.getLevel() << endl << endl;

    p1.setHitsTaken(1);
    cout << "P1 hits taken: " << p1.getHitsTaken() << endl << endl;

    cout << "P1 is " << (p1.isAlive()? "Alive" : "Dead") << endl;
    cout << "P2 is " << (p2.isAlive()? "Alive" : "Dead") << endl;

    return 0;
}