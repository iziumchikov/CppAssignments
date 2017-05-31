#include "elf.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

namespace cs_creatures {






elf::elf(): creature() {}






elf::elf(int str, int hp): creature(str, hp) {}






string elf::getSpecies() {
   string type = "elf";
   return type;
}






int elf::getDamage() {
   int damage = creature::getDamage();

   if (rand() % 2 == 0) {
      cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
      damage *= 2;
   }
   return damage;
}
}