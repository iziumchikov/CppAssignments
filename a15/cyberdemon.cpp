#include "cyberdemon.h"
#include "demon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {






cyberdemon::cyberdemon(): demon() {}






cyberdemon::cyberdemon(int str, int hp): demon(str, hp) {}






string cyberdemon::getSpecies() {
   string type = "cyberdemon";
   return type;
}
}