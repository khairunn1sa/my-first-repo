#include <stdio.h>
int main(){
    int nilai;
    scanf("%d", &nilai);
    
    if(nilai >= 85){
        printf("Nilai %d termasuk kategori A\n", nilai);
    }else if(nilai >= 75 && nilai < 85){
        printf("Nilai %d termasuk kategori B\n", nilai);
    }else if(nilai >= 50 && nilai < 70){
        printf("Nilai %d termasuk kategori C\n", nilai);
    }else if(nilai >= 30 && nilai < 50){
        printf("Nilai %d termasuk kategori D\n", nilai);
    }else{
        printf("Nilai %d termasuk kategori E\n", nilai);
    }

    return 0;
}