#include <stdio.h>
int main(){

    char n;
    scanf("%c", &n);getchar();

    switch(n){
        case 'A':
            printf("Paket A: 10 GB dengan harga Rp50.000\n");
            break;
        case 'B':
            printf("Paket B: 20 GB dengan harga Rp90.000\n");
            break;
        case 'C':
            printf("Paket C: 50 GB dengan harga Rp200.000\n");
            break;
        default:
            printf("Paket tidak tersedia\n");
    }
    return 0;
}