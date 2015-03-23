// event_class actual implemantations

#include <string>
#include "event.h""

//constructor; sets basic stats upon initialization
Event::Event (std::string get_name, int get_index) {
	event_name = get_name;
	index = get_index;
}

//Event objects
Event start_game("event1", 1);
Event event_2("event2", 2);
