#include <stdio.h>

int main() {
    int tinggi = 5; // Jumlah baris ke bawah
    int lebar = 7;  // Jumlah kolom ke samping

    // Loop i untuk mengatur Baris (Vertikal)
    for (int i = 0; i < tinggi; i++) {
        
        // Loop j untuk mengatur Kolom (Horizontal)
        for (int j = 0; j < lebar; j++) {
            
            // Logika IF untuk mendeteksi apakah posisi berada di tepi luar
            if (i == 0 || i == tinggi - 1 || j == 0 || j == lebar - 1) {
                printf("* "); // Cetak bintang di sisi luar
            } else {
                printf("  "); // Cetak 2 spasi kosong untuk bagian dalam
            }
        }
        
        // Pindah ke baris baru setelah satu baris horizontal selesai
        printf("\n");
    }

    return 0;
}