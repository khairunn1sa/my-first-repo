#include <stdio.h>
int main(){
    /*FOR 
    (‹inisialisasi awal›; ‹kondisi›; ‹operasi akhir›){
    Your code;
    }*/

    for(int i=1 ; i<=100 ; i++){ //i mulai dari 1
        printf("%d\n", i);
    }

    /* WHILE 
    ‹inisialisasi awal›
    while (‹kondisi›){
    //Your code
    }*/

    int j = 0; //i mulai dari 0
    while (j <= 100){
        printf("%d\n", j);
        j++; //operasi akhir berasa dalm codenya sendiri bkn di header seperti for
            //kalau tdk pakai operasi akhir maka akan terjadi infinite loop
    }

    /* DO WHILE
    ‹inisialisasi awal›
    do{
    }
    //Your code
    while (‹kondisi›);
    */

    int k = 0;
    do{
        printf("%d\n", k);
        k++;
    } while (k <=100);

    return 0;
}