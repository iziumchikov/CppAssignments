#ifndef HUMAN_H
#define HUMAN_H

#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class human: public creature {

   public:
      human();
      human(int str, int hp);
      string getSpecies();

};
}
#endif