#ifndef DATA_H
#define DATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// FILE
#define BOOKING_FILE "booking_data.txt"
#define ROOM_FILE "room_data.txt"

#define MAX_BOOKING 200
#define MAX_CUSTOMER_NAME 50
#define MAX_ROOM_NAME 10

// Kapasitas per tipe kamar
#define DELUXE 124
#define EXECUTIVE 46
#define SUITE 30

// Harga
#define PRICE_DELUXE 1300000.00
#define PRICE_EXECUTIVE 2100000.00
#define PRICE_SUITE 3000000.00

typedef struct
{
    int id;
    char customerName[MAX_CUSTOMER_NAME];
    char roomName[MAX_ROOM_NAME];
    int days;
    float totalPrice;
} Booking;

extern Booking booking[MAX_BOOKING];
extern int booking_count;
extern int nextBookingID;

extern int availablDeluxe;
extern int availableExecutive;
extern int availableSuite;

#endif