//
// Created by tsiory on 12/4/24.
//

#include "Room.h"
#include <iostream>
#include <string>
using namespace std ;

void Room::display_status() {
    cout << "this room is "<< status_to_string() ;
}

string Room::status_to_string () {
    switch (status) {
        case reserved :
            return "reserved" ;
        case busy :
            return"busy" ;
        case available :
            return "available" ;
    }
}

int Room::get_number() {
    return number ;
}

string Room::get_type() {
    return type_to_string() ;
}

string Room::type_to_string() {
    switch (type) {
        case suit :
            return "suit" ;
        case simple :
            return "simple" ;
        case Double :
            return "double" ;
    }
}

Room::Room(Type type, int number) : type(type) , number(number) {
    status = available ;
}

string Room::get_status() {
    return status_to_string() ;
}


void Room::change_status(Status status_change) {
    if (status != status_change) {
        status = status_change ;
    }
    cout << "the status state is already " ;
}

void Room::display_room_details() {
    cout << number << endl ;
    cout << type_to_string() << endl ;
    display_status()  ;

}
