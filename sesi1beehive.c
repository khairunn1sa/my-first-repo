#include <stdio.h>
int main(){
    // printf("Halo, BINUSIAN123\n");

    // // char name[255];
    // // scanf("%s", name);
    // // printf("Halo, %s!\n", name);

    // //lebih dari satu kata pakai %[^\n] untuk membaca sampai newline
    // //baca sampai tanda tertentu isinya jg sesuai tanda yg diinginkan [^-]
    
    // // char names[255];
    // // scanf("%[^\n]", names);
    // // printf("Halo, %s!\n", names);

    char name[255];
    char kota[255];

    scanf("%[^\n]", name);getchar(); // untuk menghapus newline dari input sebelumnya
    scanf("%[^\n]", kota);getchar(); // untuk menghapus newline dari input sebelumnya

    printf("Halo, %s dari %s!\n", name, kota);

    // char name[255];
    // char kota[255];
    // char nim[11];

    // scanf("%[^\n]", name);getchar(); // untuk menghapus newline dari input sebelumnya
    // scanf("%[^\n]", kota);getchar(); // untuk menghapus newline dari input sebelumnya
    // scanf("%[^\n]", nim);getchar(); // untuk menghapus newline dari input

    // printf("%s\n", name);
    // printf("%s\n", kota);
    // printf("%s\n", nim);
	
	// int jumlah = 800;
	// float semester = 0.5;
	// char simbol = '!';
	
	// printf("Jumlah murid di DevHive ada %d anak. Cuma belajar selama %.1f semester dapet materi 1 semester%c\n", jumlah, semester, simbol);
	 

    return 0;
}