// player_class actual implemantations

#include <string>
#include <limits>
#include "player_class.h""
#include <iostream>
#include <stdlib.h>
#include <stdlib.h>
#include <ctype.h>


//constructor; sets basic stats upon initialization
Player::Player (std::string get_name, std::string get_class,\
int init_hp, int init_mp, int init_classcode) {
	p_name = get_name;
	p_class = get_class;
	p_hp = init_hp;
	p_mp = init_mp;
	p_classcode = init_classcode;
}


//prompts the user for name, class, etc
void Player::create_new() {
	std::cout << "Enter name:" << std::endl;
	std::cin >> p_name;
	std::cout << "Choose a class:\n1.Warrior\n2.Mage\n3.Cleric" << std::endl;
	std::cin >> p_classcode;
	switch(p_classcode) { //set class string
		case 1:
			p_class = "Warrior";
		break;
		case 2:
			p_class = "Mage";
			spells.push_back(fireball);
		break;
		case 3:
			p_class = "Cleric";
		break;
	}
	std::cout << "Okay; your name is " << p_name << \
	", and you are a " << p_class << "." << std::endl;

}


//add a spell object to player spell array
void Player::add_spell(Spell this_spell) {
	spells.push_back(this_spell);
}

// Prints all objects in array and prompts user for a choice.
// Asserts and returns choice - 1.
template <class type> //template for objects
int get_choice (std::vector<type> array) { //asserts that choice is valid 
	int i = 0;
	std::string choice;
	std::cout << "Selection >" << std::endl;
	while (1) {
		for (i = 0; i < array.size(); i++) 
			std::cout << i+1 << ". " << array.at(i).get_name() << std::endl;
		std::cout << "Enter choice:" << std::endl;
		std::cin >> choice;
		int tmp = atoi(choice.c_str());
		if (choice.size() == 1 && tmp > 0 && tmp <= array.size()) {
			return (tmp - 1);
		}
		std::cin.clear();
		std::cin.ignore(1);
		std::cout << "Invalid input\n";
	}
}


//handle spell casting;
void Player::cast_spell() {
	int result =  get_choice(spells);
	std::cout << "You cast " + spells.at(result).get_name() + "!\n" << std::endl;
}

