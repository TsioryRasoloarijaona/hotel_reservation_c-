cmake_minimum_required(VERSION 3.30)
project(tp4_part2_poo)

set(CMAKE_CXX_STANDARD 20)

add_executable(tp4_part2_poo main.cpp
        Customer.cpp
        Customer.h
        Room.cpp
        Room.h
        Reservation.cpp
        Reservation.h)
