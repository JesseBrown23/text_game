// header of spell class
#include <iostream>
#include <string>

// spell object
class Spell {
    //class attrs; private
    private:
        std::string spell_name;
        int spell_damage;
        int spell_cost;
    public: //class functions
        Spell(std::string, int, int); //constructor
        std::string get_name() {
          return (spell_name);
        }
        int get_damage() {
          return (spell_damage);
        }
        int get_cost() {
          return (spell_cost);
        }

};

// global spell objects
extern Spell fireball;
extern Spell icespike;
