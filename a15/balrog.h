#ifndef BALROG_H
#define BALROG_H

#include "demon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class balrog: public demon {

   public:
      balrog();
      balrog(int str, int hp);
      string getSpecies();
      int getDamage();

};
}
#endif