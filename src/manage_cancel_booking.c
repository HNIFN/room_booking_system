// manage_booking.c

#include <stdio.h>
#include "manage_cancel_booking.h"
#include "data.h"

int cancel_booking(int booking_id) {
    
    printf("Mencari pemesanan dengan ID: %d...\n", booking_id);
    
    if (booking_id > 1000 && booking_id < 9999) { 
        printf("Pemesanan %d berhasil dibatalkan.\n", booking_id);
        
        return 1; 
    } else {
        printf("Error: Pemesanan dengan ID %d tidak ditemukan atau tidak valid.\n", booking_id);
        return 0; 
    }
}

void manage_booking_menu() {
    int choice;
    int booking_to_cancel;
    int result;

    do {
        printf("\n--- MANAJEMEN PEMESANAN ---\n");
        printf("1. Batalkan Pemesanan\n");
        printf("2. Jadwalkan Ulang Pemesanan\n");
        printf("3. Kembali ke Menu Utama\n");
        printf("Pilih opsi: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nMasukkan ID Pemesanan yang akan dibatalkan: ");
                while (getchar() != '\n'); 
                scanf("%d", &booking_to_cancel);
                
                result = cancel_booking(booking_to_cancel);
                
                if (result) {
                    printf("Operasi Pembatalan Selesai.\n");
                } else {
                    printf("Operasi Pembatalan Gagal.\n");
                }
                break;
            case 2:
                printf("\nMenuju logika Penjadwalan Ulang.\n");
                break;
            case 3:
                printf("Kembali ke menu utama...\n");
                break;
            default:
                printf("Opsi tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 3);
}