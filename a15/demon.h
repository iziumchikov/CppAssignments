#ifndef DEMON_H
#define DEMON_H

#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class demon: public creature {
   public:
      demon();
      demon(int str, int hp);
      string getSpecies();
      int getDamage();
};
}
#endif