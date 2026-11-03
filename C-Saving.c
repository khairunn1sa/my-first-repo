#include <stdio.h>

int main(){
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	
	double percent = b / a *100.0;
	printf("%.4lf%%\n", percent);
	
	return 0;
}