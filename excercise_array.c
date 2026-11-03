#include <stdio.h>
int main(){

    int n;
    scanf("%d\n", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for ( int i = 1; i < n-1 ; i++){
        if (arr[i] %2 == 0){
            printf("%d ", arr[i]);
        }
    }
    puts("\n");
    return 0;
}