#include "demon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class cyberdemon: public demon {

   public:
      cyberdemon();
      cyberdemon(int str, int hp);
      string getSpecies();

};
}