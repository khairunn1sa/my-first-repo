#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    // Total kamar: 30
    // Standard: 15 kamar, Rp350.000, nomor 101-115
    // Deluxe:   10 kamar, Rp800.000, nomor 201-210
    // Suite:     5 kamar, Rp1.200.000, nomor 301-305
    int roomNumbers[30];
    char roomTypes[30][20];
    int roomPrices[30];
    int roomStatus[30];
    int roomDurasi[30];

    for (int i = 0; i < 30; i++) {
        roomStatus[i] = 0;
        roomDurasi[i] = 0;

        if (i < 15) {
            strcpy(roomTypes[i], "Standard");
            roomPrices[i] = 350000;
            roomNumbers[i] = 101 + i;
        } else if (i < 25) {
            strcpy(roomTypes[i], "Deluxe");
            roomPrices[i] = 800000;
            roomNumbers[i] = 201 + (i - 15);
        } else {
            strcpy(roomTypes[i], "Suite");
            roomPrices[i] = 1200000;
            roomNumbers[i] = 301 + (i - 25);
        }
    }

    // Data reservasi online.
    char dbNama[5][30] = {"Budi", "Siti", "Joko", "Eko", "Adi"};
    char dbId[5][20] = {
        "3332221116667770",
        "4442221116667778",
        "3332220006667779",
        "3335551116667772",
        "3332221118887779"
    };
    char dbTelp[5][15] = {
        "081111112222",
        "081133332222",
        "081111112223",
        "081111112234",
        "081111112789"
    };
    int dbRoomIndex[5] = {0, 1, 3, 15, 7};
    int dbDurasiStay[5] = {3, 2, 4, 5, 1};
    int dbStatus[5] = {0, 0, 1, 0, 1}; // 0 = belum check-in, 1 = sudah check-in

    // Tandai kamar reservasi online yang sudah check-in sebagai terisi.
    for (int i = 0; i < 5; i++) {
        if (dbStatus[i] == 1) {
            int roomIndex = dbRoomIndex[i];
            roomStatus[roomIndex] = 1;
            roomDurasi[roomIndex] = dbDurasiStay[i];
        }
    }

    int pilihanMenu;

    printf("=== Sistem Hotel ===\n");
    printf("1. Cek Reservasi Online\n");
    printf("2. Pesan Kamar (Walk-In)\n");
    printf("3. Check-Out & Pembayaran\n");
    printf("Pilih Menu (1-3): ");

    if (scanf("%d", &pilihanMenu) != 1) {
        printf("[ERROR] Input tidak valid\n");
        return 1;
    }

    switch (pilihanMenu) {
        case 1: {
            // Cari reservasi online berdasarkan ID dan nomor telepon.
            char id[20];
            char telp[15];

            printf("Masukkan Nomor Identitas Anda: ");
            if (scanf("%19s", id) != 1) {
                printf("[ERROR] Input tidak valid\n");
                return 1;
            }

            printf("Masukkan Nomor Telepon Anda: ");
            if (scanf("%14s", telp) != 1) {
                printf("[ERROR] Input tidak valid\n");
                return 1;
            }

            int ditemukan = -1;

            for (int i = 0; i < 5; i++) {
                if (strcmp(dbId[i], id) == 0 && strcmp(dbTelp[i], telp) == 0) {
                    ditemukan = i;
                    break;
                }
            }

            if (ditemukan == -1) {
                printf("Data tidak ditemukan\n");
            } else {
                dbStatus[ditemukan] = 1;
                int roomIndex = dbRoomIndex[ditemukan];
                roomStatus[roomIndex] = 1;
                roomDurasi[roomIndex] = dbDurasiStay[ditemukan];

                printf("Nama: %s\n", dbNama[ditemukan]);
                printf("ID: %s\n", dbId[ditemukan]);
                printf("Telp: %s\n", dbTelp[ditemukan]);
                printf("Jenis Kamar: %s\n", roomTypes[roomIndex]);
                printf("Nomor Kamar: %d\n", roomNumbers[roomIndex]);
                printf("Durasi Menginap: %d malam\n", roomDurasi[roomIndex]);
                printf("Status: Check-in\n");
            }

            break;
        }

        case 2: {
            // Pesan kamar secara langsung (walk-in).
            int kamarPenuh = 1;

            for (int i = 0; i < 30; i++) {
                if (roomStatus[i] == 0) {
                    kamarPenuh = 0;
                    break;
                }
            }

            if (kamarPenuh) {
                printf("Kamar full booked\n");
                break;
            }

            char namaTamu[31];
            char idTamu[20];
            char telpTamu[15];
            int durasiTamu;

            while (1) {
                printf("Masukkan nama (maks. 30 karakter): ");
                if (scanf(" %30[^\n]", namaTamu) != 1) {
                    printf("[ERROR] Nama tidak boleh kosong\n");
                    return 1;
                }

                int namaValid = 1;
                for (int i = 0; namaTamu[i] != '\0'; i++) {
                    if (!isalpha((unsigned char)namaTamu[i]) && namaTamu[i] != ' ') {
                        namaValid = 0;
                        break;
                    }
                }

                if (!namaValid) {
                    printf("[ERROR] Nama hanya boleh berisi huruf dan spasi\n");
                    continue;
                }

                break;
            }

            while (1) {
                printf("No. KTP (16 digit): ");
                if (scanf("%19s", idTamu) != 1) {
                    printf("[ERROR] Input ID tidak valid\n");
                    return 1;
                }

                if (strlen(idTamu) != 16) {
                    printf("[ERROR] ID harus terdiri dari 16 digit\n");
                    continue;
                }

                int idValid = 1;
                for (int i = 0; i < 16; i++) {
                    if (!isdigit((unsigned char)idTamu[i])) {
                        idValid = 0;
                        break;
                    }
                }

                if (!idValid) {
                    printf("[ERROR] ID hanya boleh berisi angka\n");
                    continue;
                }

                break;
            }

            while (1) {
                printf("Masukkan no. telepon (diawali 08 atau +62): ");
                if (scanf("%14s", telpTamu) != 1) {
                    printf("[ERROR] Input nomor telepon tidak valid\n");
                    return 1;
                }

                int telpValid =
                    (telpTamu[0] == '0' && telpTamu[1] == '8') ||
                    (telpTamu[0] == '+' && telpTamu[1] == '6' && telpTamu[2] == '2');

                if (!telpValid) {
                    printf("[ERROR] Nomor telepon harus diawali 08 atau +62\n");
                    continue;
                }

                break;
            }

            while (1) {
                printf("Lama menginap (malam): ");
                if (scanf("%d", &durasiTamu) != 1 || durasiTamu <= 0) {
                    printf("[ERROR] Durasi harus berupa angka lebih dari 0\n");
                    return 1;
                }

                break;
            }

            int assignRoomTamu = -1;
            for (int i = 0; i < 30; i++) {
                if (roomStatus[i] == 0) {
                    assignRoomTamu = i;
                    roomStatus[i] = 1;
                    roomDurasi[i] = durasiTamu;
                    break;
                }
            }

            int estimasiHarga = roomPrices[assignRoomTamu] * durasiTamu;
            printf("Nama: %s\n", namaTamu);
            printf("ID: %s\n", idTamu);
            printf("Telp: %s\n", telpTamu);
            printf("Jenis Kamar: %s\n", roomTypes[assignRoomTamu]);
            printf("Nomor Kamar: %d\n", roomNumbers[assignRoomTamu]);
            printf("Durasi Menginap: %d malam\n", durasiTamu);
            printf("Estimasi Biaya: Rp%d\n", estimasiHarga);
            printf("Status: Check-in\n");
            break;
        }

        case 3: {
            int roomHotel;
            printf("Masukkan nomor kamar: ");

            if (scanf("%d", &roomHotel) != 1) {
                printf("[ERROR] Nomor kamar tidak valid\n");
                return 1;
            }

            int target = -1;
            for (int i = 0; i < 30; i++) {
                if (roomNumbers[i] == roomHotel) {
                    target = i;
                    break;
                }
            }

            if (target == -1) {
                printf("Nomor kamar tidak ditemukan\n");
            } else if (roomStatus[target] == 0) {
                printf("Kamar memang kosong\n");
            } else {
                int total = roomPrices[target] * roomDurasi[target];
                printf("Harga tagihan: Rp%d\n", total);

                roomStatus[target] = 0;
                roomDurasi[target] = 0;
            }

            break;
        }

        default:
            printf("[ERROR] Pilihan menu tidak valid\n");
            break;
    }

    return 0;
}