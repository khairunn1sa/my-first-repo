#include <stdio.h>

int main() {
    int arr[6];
    int max = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Nilai terbesar: %d\n", max);
    return 0;
}