#ifndef ELF_H
#define ELF_H

#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class elf: public creature {

   public:
      elf();
      elf(int str, int hp);
      string getSpecies();
      int getDamage();

};
}
#endif