//
// Created by tsiory on 12/6/24.
//

#include "Reservation.h"

Reservation::Reservation(Room room, Customer customer, tm date_start, tm date_end): customer(customer), room(room),
    date_start(date_start), date_end(date_end) {
};

void Reservation::make_reservation() {
    if (room.get_status() != "available") {
        cout << "this room is not available ";
    }
    room.change_status(Room::reserved);
    cout << "Reservation completed successfully ";
}

void Reservation::cancel_reservation() {
    if (room.get_status() == "reserved") {
        room.change_status(Room::available);
        cout << "reservation canceled successfully";
    }
    cout << "this reservation can not be canceled";
}

void Reservation::display_reservation_detail() {
    cout << "reservation details:\n" << endl
            << "************************************" << endl
            << "customer : " << customer.getLastname() << endl
            << date_start.tm_mday << " / " << date_start.tm_mon << " / " << date_start.tm_year << endl
            << "room :" << endl;
    room.display_room_details();
}
