#ifndef VIEW_BOOKING_H
#define VIEW_BOOKING_H

#include <stdio.h>
#include <string.h>
#include "data.h"

//menampilkan semua booking
void viewBookings();

//mengurutkan booking berdasarkan ID
void sortBookingsByID();

//fungsi swap booking
void swapBookings(Booking *a, Booking *b);

#endif //VIEW_BOOKING_H