//
// Created by tsiory on 12/4/24.
//

#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;

class Room {

public:
    enum Status {
        busy ,
        available,
        reserved
    };

    enum Type {
        simple ,
        Double ,
        suit
    };
private :
    int number;

    Type type ;

    Status status;

public :
    Room(Type type , int number) ;
    int get_number() ;
    string get_type() ;
    void display_status ()  ;
    string status_to_string () ;
    string type_to_string () ;
    string get_status() ;
    void change_status (Status status_change) ;
    void display_room_details () ;
};


#endif //ROOM_H
