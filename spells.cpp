// event_class actual implemantations

#include <string>
#include <spells.h>

//constructor; sets basic stats upon initialization
Spell::Spell (std::string name, int damage, int cost) {
	spell_name = name;
	spell_damage = damage;
	spell_cost = cost;
}

//define spells here
Spell fireball("Fireball", 5, 10);
Spell icespike("Icespike", 5, 10);