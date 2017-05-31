#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
namespace cs_creatures {

class creature {

   private:
      int strength;
      int hitpoints;

   public:
      creature();
      creature(int str, int hp);
      int getStrength() const;
      int getHitpoints() const;
      void setStrength(int str);
      void setHitpoints(int hp);
      virtual int getDamage();
      virtual string getSpecies() = 0;
   
	}; //end class
}//end namespace
#endif