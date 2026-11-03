#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) { //ngeprint baris nyamping ***
        for (int j = 1; j <= 5; j++) { //ngeprint baris ke bawah ky kolom
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) { // pada baris ke 1 hanya *, baris ke 2 makan **, dst. j ngikut i gt
            printf("*");
        }
        printf("\n");
    }

    int n;
    scanf("%d", &n);getchar();

    int sum = 0;
    for(int i=1 ; i <= n; i++){
        sum += i; //sum = sum + i
    }
    printf("%d\n", sum);
    return 0;
}
