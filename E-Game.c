#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	unsigned long long result =(1ULL << n)-1;
	printf("%llu\n", result);
	return 0;
}