#include <stdio.h>
int main(){

    int n;
    scanf("%d\n", &n);

    int arr[n];
    for (int i = 0; i < n; i++) { //loop array untuk input nilai sesuai slot yg input atas
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) { //loop array untuk output nilai sesuai slot dan nilai yg diinput di loop 1
        printf("%d ", arr[i]);
    }
    printf("\n");
    puts("\n================================\n");

    int x;
    scanf("%d\n", &x);

    int array[x];
    for (int i = 0; i < x; i++) { //loop array untuk input nilai sesuai slot yg input atas
        scanf("%d", &array[i]);
    }
    int total = 0;
    for (int i = 0; i < x; i++) { //loop array untuk output nilai sesuai slot dan nilai yg diinput di loop 1
        total = total + array[i];
    }
    printf("%d", total);
    printf("\n");
    puts("\n================================\n");

    int z;
    scanf("%d\n", &z);

    int arrayy[z];
    for (int i = 0; i < z; i++) { //loop array untuk input nilai sesuai slot yg input atas
        scanf("%d", &arrayy[i]);
    }

    for(int i = z-1; i>=0; i--){ //loop array untuk output nilai urutannya terbalik
        printf("%d ", arrayy[i]);
    }
    puts("\n");
    return 0;
}