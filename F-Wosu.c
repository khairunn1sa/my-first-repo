#include <stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	long long result = 100 * n + 25 * n * (n-1);
	printf("%lld\n", result);
	
	return 0;
}