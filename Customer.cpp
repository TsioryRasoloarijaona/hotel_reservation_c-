//
// Created by tsiory on 12/4/24.
//

#include "Customer.h"

int id_generator = 1 ;



Customer::Customer(string firstname, string lastname, string email) : id(id),
                                                                              firstname(firstname),
                                                                              lastname(lastname),
                                                                              email(email) {
    id = id_generator ;
    id_generator++ ;
}

int Customer::getId() {
    return id;
}

string Customer::getFirstname() {
    return firstname;
}

string Customer::getLastname() {
    return lastname;
}

string Customer::getEmail() {
    return email;
}

void Customer::setId(int id) {
    id = id;
}

void Customer::setFirstname(string firstname) {
    firstname = firstname;
}

void Customer::setLastname(string lastname) {
    lastname = lastname;
}

void Customer::setEmail(string email) {
    email = email;
}

void Customer::display_customer() {
    cout << "id =" << id << endl
            << "fistname :" << firstname << endl
            << "lastname :" << lastname << endl
            << "email :" << email << endl;
}



