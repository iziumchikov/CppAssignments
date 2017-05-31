#include "demon.h"
#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {






demon::demon(): creature() {}






demon::demon(int str, int hp): creature(str, hp) {}






string demon::getSpecies() {
   string type = "demon";
   return type;
}






int demon::getDamage() {
   int damage = creature::getDamage();

   if (rand() % 4 == 0) {
      cout << "Demonic attack inflicts 50 additional damage points!" << endl;
      damage += 50;
   }
   return damage;
}
}