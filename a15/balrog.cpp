#include "balrog.h"
#include "demon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {






balrog::balrog(): demon() {}






balrog::balrog(int str, int hp): demon(str, hp) {}






string balrog::getSpecies() {
   string type = "balrog";
   return type;
}






int balrog::getDamage() {
   int damage = demon::getDamage();
   int damage2 = (rand() % getStrength()) + 1;

   cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;

   return damage+damage2;
}
}