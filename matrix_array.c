#include <stdio.h>

int main(){
	int testcase;
	int hasil;
	
	scanf("%d", &testcase);
	getchar();
	
	int ukMatrix;

	for(int i=0; i<testcase; i++){
		scanf("%d", &ukMatrix);
		getchar();
		
		int angka[ukMatrix/*baris*/][ukMatrix/*kolom*/];
		for(int j=0; j<ukMatrix; j++){
			for(int k=0; k<ukMatrix; k++){
				scanf("%d", &angka[j][k]);
				getchar();
			}
		}
		
		printf("Case #%d: ", i+1);
		int hasil = 0;
		for(int k=0; k<ukMatrix; k++){
			for(int j=0; j<ukMatrix; j++){
				hasil += angka[j][k];
			}
			if(k == ukMatrix-1){
				printf("%d\n", hasil);
			} else{
				printf("%d ", hasil);
			}
			
			hasil = 0;
		}
		hasil = 0;
	
	}
	
	return 0;
}