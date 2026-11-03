#include <stdio.h>
#include <string.h>

int main(){

    int tc;
    scanf("%d",&tc);
    getchar();

    char string[101];
    int panjangString;

    for(int i=0; i<tc ; i++){ 
        scanf("%[^\n]", string);
        getchar();
        
        printf("Jawaban %d: ", i+1);

        panjangString=strlen(string); //strlen(namavar) ini dipakai untuk ngitung index dari stringnya
        for(int j=0; j<panjangString; j++){
            printf("%c", string[panjangString - j - 1]);
        }
        printf("\n");
    }

    return 0;
}