#include <iostream>
#include "Room.h"
#include "Customer.h"
#include "Reservation.h"
#include "ctime"
using namespace std;



// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    tm date_start ;
    date_start.tm_year = 2024 ;
    date_start.tm_mon = 12 ;
    date_start.tm_mday = 12 ;

   Customer carla =  Customer("carla" , "santos" , "santos@gmail.com") ;
    Room room_1 = Room(Room::simple , 2) ;
    Reservation reservation = Reservation(room_1 , carla , date_start , date_start) ;


    reservation.make_reservation() ;
    reservation.cancel_reservation() ;
    reservation.display_reservation_detail() ;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.