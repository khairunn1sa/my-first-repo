#include <stdio.h>

int main (){
	double a, b;
	scanf("%lf %lf", &a, &b);
	
	double discount = ((a-b)/a)*100.0;
	printf("%.2lf%%\n", discount);
	
	
	return 0;
}