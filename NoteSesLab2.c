#include <stdio.h>

int main(){
	//operator comma
	int nilai;
	nilai = 3;
	printf("%d\n", nilai);
	
	//int nilay;
	//nilai = (3,4);//(error) krn int nilai=3; int 4 
	//printf("%d\n", nilay);
	
	int nilaiii;
	nilaiii = (3,5,9); //nilai +3(reject)->5(reject)->9
	printf("%d\n", nilaiii);
	
	int number;
	number = (printf("halo\n"),7);
	printf("&d\n", number);
	
	//bit
	int bit1 = 4;
	int bit2 = 2;
	printf("%d\n", (bit1&bit2)!=1);
		
	//increment
	int number1= 8;
	//pointer (ngasi tau alamat variabel kita). prubahan nilai
	int *pointer_number1 = &number1;
	printf("%p - %p\n", pointer_number1, &number1);
	
	//++ = number1 + 1
	//...++ = CHECK NUM FIRST, THEN +1 
	//++... = PRINTOUT THE RESULT NUM +1 
	printf("%d\n", number1);//8
	printf("%d\n", number1++); //post increment:8 -> 9
	//printf("%d\n", number1); kalau ini dita,bahkan maka outputnya akan 9, bkn 8 lg, 
	printf("%d\n", ++number1); //pre increment:10
	printf("%d\n", number1);
	
	int umr = 6000000;
	int pendapatan;
	int listrik;
	printf("Masukan pendapatan anda: ");scanf("%d", &pendapatan);
	printf("Meteran listrik rumah anda: ");scanf("%d", &listrik);
	
	int beasiswa = (pendapatan<umr) && ((listrik >= 900) && (listrik <= 1300)) ; 
	//&& (kedua syarat harus terpenuhi)
	//              true            &&             false       false(0) 5.000.000 2.200
	//|| (cukup satu syarat terpenuhi) 
	//              true            ||             false       true(1) 5.000.000 2.200  
	printf("%s\n", (beasiswa==1)? "layak" : "tidak layak");
	
	// 900 < listrik < 1300
	// (listrik >= 900) && (listrik <= 1300)
	
	//if (pendapatan,umr){ 
	//	printf ("layak\n"); 
	//}else{
	//	printf("tidak layak\n");
	
	//TRUE (1) OR FALSE (0)
	int nilaii;
	nilai = (10<8);//false
	printf("%d\n", nilaii);
	int n = (5 == 5); //true
	printf("%d\n", n);
	
	int point = 1000;
	int bonus = 500;
	int angka = 2000;
	
	float hasil = (float)bonus / point; //integer = 500.0 / 1000 = 0
	printf("%f\n", hasil);
	
	// operasi matematika +-*/
	// 5 + 2 * 3 (dikerjakan sesuai dakabataku (urutan matematisnya)
	printf("%d\n", (5+2)*3);
	
	//point = angka - point;
	//printf("%d\n", point);
	//point -= angka; // point = point - angka;
	//printf("%d\n", point);
	
	//point = point + bonus;
	//printf("%d\n", point);
	
	return 0;
}