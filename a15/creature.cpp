#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

namespace cs_creatures {






creature::creature() {
   strength = 10;
   hitpoints = 10;
}






creature::creature(int str, int hp) {
   strength = str;
   hitpoints = hp;
}






int creature::getDamage() {
   int damage = (rand( ) % strength) + 1;

   cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;

   return damage;
}






int creature::getStrength() const {
   return strength;
}






int creature::getHitpoints() const {
   return hitpoints;
}






void creature::setStrength(int str) {
   strength = str;
}






void creature::setHitpoints(int hp) {
   hitpoints = hp;
}

}