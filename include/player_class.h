// header of player_class
#include <iostream>
#include <string>
#include <vector>
#include <spells.h>

class Player {
    //class attrs; private
    private:
        std::string p_name;
        std::string p_class;
        int p_hp, p_mp, p_classcode;
        std::vector<Spell> spells;
    public: //class functions
        Player(std::string, std::string, int, int, int); //constructor
        void create_new(); //initializes player selection.
        void add_spell(Spell); //adds a spell to character spell array.
        void cast_spell(); //display all spells then return selection.
        int get_hp() {
          return (p_hp);
        }
        int get_mp() {
          return (p_mp);
        }
        int get_classcode() {
          return (p_classcode);
        }
        std::string get_name() {
          return (p_name);
        }
        std::string get_class() {
          return (p_class);
        }
};

