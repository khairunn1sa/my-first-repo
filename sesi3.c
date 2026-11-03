#include <stdio.h>
int main(){

    /*ARRAY
    digunakan untuk menyimpan data yang memiliki tipe data yang sama
    <tipe data> <array name> [<jumlah elemen/array size>]*/

    //ex sederhana array inisialisasi manual
    int angka[]={1,2,3,4,5};
    printf("%d\n", angka[0]); //manggil data pertama pakai 0, dst (output printf 1)
    printf("%d\n", angka[1]); //manggil data kedua pakai

    int angkas[5]={1,2,3}; //maka slot sisa akan diisi 0 (output printf 0)
    printf("%d\n", angkas[4]);

    //ARRAY 1 DIMENSI
    int A[6];
    for (int i=0 ; i <4 ; i++){
        A[i] = i + 1;
        printf("%d\n", A[i]);
    }

    //ARRAY 2 DIMENSI
    // Structure:
    // ‹tipe data› ‹nama array› [<row›][<column›];
    // Example: int arr[4][5];

    int arr[4][5];
    for (int i = 0; i < 4; i++){ 
        for (int j = 0; j < 5; j++){
        arr[i][j] = value; 
        }
    }

    //ARRAY 3 DIMENSI
    // Structure:
    // ‹tipe data› ‹nama array› [<row>][<column>][<depth>];
    int arr[3][3][3];
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                arr[i][j][k] = value;
            }
        }
    }
    
    return 0;
}