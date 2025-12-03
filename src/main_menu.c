#include <stdio.h>
#include "main_menu.h"
#include "new_booking.h"

void LIST_MENU()
{
    printf("           ROOM BOOKING SYSTEM\n");
    printf("\n========================================\n");
    printf("========================================\n");
    printf("1. New Booking\n");
    printf("2. View Booking\n");
    printf("3. Manage Booking\n");
    printf("4. Check Availability\n");
    printf("5. Exit\n");
    printf("========================================");
}

void EXIT_SYSTEM()
{
    printf("\nGOOD BYE\n");
}
/*  */
void MAIN_MENU()
{
    int menu;

    do
    {
        LIST_MENU();
        printf("Input menu : ");

        scanf("%d", &menu);

        switch (menu)
        {
        case 1:

            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            EXIT_SYSTEM();
            break;

        default:
            printf("Please input correct menu!");
            break;
        }
    } while (menu != 5 /*  */);
}
