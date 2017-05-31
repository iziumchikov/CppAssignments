#include "human.h"
#include "creature.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

namespace cs_creatures {






human::human():creature() {}






human::human(int str, int hp): creature(str, hp) {}






string human::getSpecies() {
   string type = "human";
   return type;
}
}