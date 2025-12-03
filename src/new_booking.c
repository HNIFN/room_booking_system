#include <stdio.h>
#include "new_booking.h"
#include "data.h"

void NEW_BOOKING()
{
    if (booking_count >= MAX_BOOKING)
    {
        printf("NO MORE AVAILABLE ROOM");
        return;
    }

    Booking newBook;
    char choice[2];
    float price = 0.0;

    printf("----- New Booking Form -----\n\n");

    printf("1. Deluxe (Rp%.2f/malam, Tersedia: %d)\n", PRICE_DELUXE, availablDeluxe);
    printf("1. Executive (Rp%.2f/malam, Tersedia: %d)\n", PRICE_EXECUTIVE, availableExecutive);
    printf("1. Suite (Rp%.2f/malam, Tersedia: %d)\n", PRICE_SUITE, availableSuite);
    printf("Chose room type: ");

    scanf("%s", choice);
}