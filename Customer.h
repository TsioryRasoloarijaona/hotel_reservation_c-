//
// Created by tsiory on 12/4/24.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iostream>
using namespace std ;


class Customer {
private :
    int id;
    string firstname;
    string lastname;
    string email;

public:
    Customer(string firstname , string lastname , string email ) ;

    int getId () ;
    string getFirstname() ;
    string getLastname() ;
    string getEmail () ;

    void setId (int id) ;
    void setFirstname(string firstname) ;
    void setLastname(string lastname) ;
    void setEmail(string email) ;
    void display_customer() ;


};



#endif //CUSTOMER_H
