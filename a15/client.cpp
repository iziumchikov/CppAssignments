#include "elf.h"
#include "human.h"
#include "balrog.h"
#include "demon.h"
#include "cyberdemon.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace cs_creatures;

void battleArena(creature &creature1, creature &creature2);

int main() {
    srand((time(0)));
    
    elf e(50,50);
    balrog b(50,50);
    battleArena(e, b);
    
    
    human h(50,50);
    cyberdemon c(50,50);
    battleArena(h,c);
    
    
    human h2(50,50);
    elf e2(50,50);
    battleArena(h2, e2);
    
    
    cyberdemon c2(50,50);
    balrog b2(50,50);
    battleArena(c2,b2);
}


void battleArena(creature &creature1, creature &creature2) {
    string firstSpecies = creature1.getSpecies();
    string secondSpecies = creature2.getSpecies();

    int firstStrength = creature1.getStrength();
    int secondStrength = creature2.getStrength();

    int firstHitpoint = creature1.getHitpoints();
    int secondHitpoint = creature2.getHitpoints();

    int firstDamage, 
	secondDamage;
    
    cout << "This battle is between the " << firstSpecies << " and the " << secondSpecies << "!" << endl << endl;
    
    for (int i = 1; firstHitpoint > 0 && secondHitpoint > 0; i++) {
        cout << "Round " << i << ": " << endl;
        
        cout << "The " << firstSpecies << " has " << firstStrength << " strength and " << firstHitpoint << " hitpoints!" << endl;
        
        cout << "The " << secondSpecies << " has " << secondStrength << " strength and " << secondHitpoint << " hitpoints!" << endl;
        
        firstDamage = creature1.getDamage();
        secondDamage = creature2.getDamage();
        
        cout << "The " << firstSpecies << " has " << (firstHitpoint -= secondDamage) << " hitpoints left!" << endl;
        
        cout << "The " << secondSpecies << " has " << (secondHitpoint -= firstDamage) << " hitpoints left!" << endl;
    }
    
    if (firstHitpoint <= 0 && secondHitpoint > 0) {
        cout << "The " << secondSpecies << " has won the battle!\n" << endl;
    }
    else if (firstHitpoint > 0 && secondHitpoint <= 0) {
        cout << "The " << firstSpecies << " has won the battle!\n" << endl;
    }
    else {
        cout << "The " << firstSpecies << " and the " << secondSpecies << " are tied!\n" << endl;
    }
}
