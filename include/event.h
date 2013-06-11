// header of event_class
#include <iostream>
#include <string>

// event object
class Event {
    //class attrs; private
    private:
        std::string event_name;
        int index;
    public: //class functions
        Event(std::string, int); //constructor
        std::string get_event_name() {
          return (event_name);
        }
        int get_index() {
          return (index);
        }
        void start();
};

// global event objects
extern Event start_game;
extern Event event_2;
