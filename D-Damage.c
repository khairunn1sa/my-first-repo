#include <stdio.h>

int main(){
	double ph, m, pu;
	scanf("%lf %lf %lf", &ph, &m, &pu);
	
	double total_damage = (0.2*ph) + (0.3*m) + (0.5*pu);
	printf("%.2lf\n",total_damage);
	
	return 0;
}