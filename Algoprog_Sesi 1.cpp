
//Header
#include <stdio.h>  // -> input output (standard input/output header)

#include <string.h> // -> string function

#include <math.h>   // -> math function
#include <time.h>   // -> time and date function

#include <stdlib.h> // -> utility function

//Function
int main(){
	
	 /* Ada 2 tipe comment:
	 1. //Comment   -> comment satu line
	 2. /*Comment/* -> buat comment banyak line
	 */
	 
	//Variable: ada isinya, ada valuenya. Nama bebas, gaboleh spasi (contoh angkaBulat, angka_bulat)
	//Tipe Data
	//1. Integer -> Bilangan bulat (0, 1, 2, -1, dst) ini keperluan sehari hari
	//%d
//	int nilai = 95;
//	
//	//long long integer 
//	//%lld
//	long long int gaji = 10000;
//	
//	//2. Float -> Bilangan desimal (berkoma)
//	//%f
//	float suhu = 37.5;
//	
//	//double
//	//%lf
//	double gaji2 = 1000.55;
//	
//	//3. Char -> untuk isi 1 character (huruf 'a' 'A', angka 1 2, simbol ? . >)
//	//%c
//	char huruf = 'A';
//	
//	//4. String -> nyimpan kumpulan character (huruf, angka, spasi, simbol)
//	//          -> Ayam bertelur pagi hari   = 23 character
//	//%s
//	char kalimat[255] = "Ayam bertelur pagi hari"; // -> pesan 24 tempat
//	char kalimat2[] = "Ayam bertelur pagi hari";  // -> ditentuin sama compiler ukuran/tempatnya berapa 
//	
//	//5. Boolean -> true (1) / false (0)
//	int benarAtauSalah = 1;
//	
//	//OUTPUT -> yang keluar di terminal
//	// \n -> new line, enter
//	printf("Nilai saya adalah %d.\n", nilai);
//	printf("Gaji saya adalah %lld.\n", gaji);
//	
//	printf("Suhu saya adalah %f.\n", suhu);
//	printf("Suhu saya adalah %.4f.\n", suhu);
//	printf("Gaji2 saya adalah %lf.\n", gaji2);
//	printf("Gaji2 saya adalah %.2lf.\n", gaji2);
//	
//	printf("Character saya adalah %c.\n", huruf);
//	printf("String saya adalah %s.\n", kalimat);
//	
//	puts("=====================================");
	
//	//INPUT  -> yang dimasukkan ke terminal
//	int ukuran;
//	printf("Masukkan ukuran sepatu anda: ");
//	scanf("%d", &ukuran);
//	
//	printf("Ukuran sepatu anda adalah %d.\n", ukuran);
	
	//	Example 1
//	printf("Halo, BINUSSIAN123\n");
//	puts("Halo, BINUSSIAN123");
	
	//	Example 2
//	char nama[255];
//	scanf("%s", nama);
//	printf("Halo, %s!\n", nama);
	
	//Example 3
//	char nama[255];
//	//Devi Nana\n
//	scanf("%[^\n]", nama);
//	printf("Halo, %s!\n", nama);
//	
//	//Devi Nana.3012345\n
//	scanf("%[^.]", nama);
//	printf("Halo, %s!\n", nama);
	//Jadi penggunaan ^ bebas kalian mau ambil inputan user dari awal sampai mana. Bisa simbol, angka, dll.
	

	//Example 4
//	char nama[255];
//	char kota[255];
//	
//	scanf("%[^\n]", nama);
//	getchar();
//	
//	scanf("%[^\n]", kota);
//	getchar();
//	
//	printf("Nama saya adalah %s\n", nama);
//	printf("Asal saya adalah %s\n", kota);
//	int umur =20;
//	printf("%s %s (%d tahun).\n", nama, kota, umur);
	
	
//	char n[255];
//    scanf("%[^\n]",n);
//    getchar();
//    
//    char ni[11];
//    scanf("%[^\n]",ni);
//    getchar();
//    
//    char ko[255];
//    scanf("%[^\n]",ko);
//    printf("%s\n",n);
//    printf("%s\n",ni);
//    printf("%s\n",ko);
//    printf("-6.201738192577953, 106.78230952572501\n");
		
//	int a = 1;
//	int b = 2;
//	int jumlah = a+b;
//	printf("Penjumlahan = %d.\n", jumlah);
//	printf("Penjumlahan = %d.\n", a+b);
//	printf("Pengurangan = %d.\n", a-b);
//	printf("Perkalian = %d.\n", a*b);
//	printf("Pembagian = %d.\n", a/b);
//	printf("Modulus = %d.\n", a%b);
	
	int a = 1;
	int b = 2;
	//	post increment (a++) -> jalankan a, baru tambah 1
	// 1
//	printf("%d.\n", a++);
	//1+1=2
//	printf("%d.\n", a);
	
	// pre increment (++a) -> tambah 1, baru jalankan a
	// 1+1 = 2
//	printf("%d.\n", ++a);
//	// 2
//	printf("%d.\n", a);

//	int jumlah = a+b;
//	printf("%d.\n", jumlah++);
	
//	post decrement (a--) -> jalankan a, baru kurang 1
//	printf("%d.\n", a--);
//	printf("%d.\n", a);
	
//	pre decrement (--a) -> kurang 1, baru jalankan a
//	printf("%d.\n", --a);
//	printf("%d.\n", a);
	
	printf("A == B -> %d\n", a == b);
	printf("A < B -> %d\n", a < b);
	printf("A > B -> %d\n", a > b);
	printf("A >= B -> %d\n", a >= b);
//	kalau 0 -> false
//  kalau 1 -> true
	
	return 0;
	//	 kalau keluarnya 0, berarti lancar gada salah
	//	 kalau keluarnya selain 0, berarti ada salah di code
}


