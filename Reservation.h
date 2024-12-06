//
// Created by tsiory on 12/6/24.
//

#ifndef RESERVATION_H
#define RESERVATION_H
#include "Customer.h"
#include "Room.h"
#include <ctime>

using namespace std ;


class Reservation {
private :
    Customer customer ;
    Room room ;
    tm date_start ;
    tm date_end ;

public:
    Reservation(Room room , Customer customer , tm date_start , tm date_end) ;
    void make_reservation() ;
    void cancel_reservation() ;
    void display_reservation_detail ();
};



#endif //RESERVATION_H
