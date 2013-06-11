#include <iostream>
#include <string>
#include <player_class.h>

int main () {
	std::cout << "New game:\n";
	Player player1 ("Bob", "builder", 1, 1, 1);
	player1.create_new();

	return 0;
}