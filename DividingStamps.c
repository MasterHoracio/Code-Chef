#include <stdio.h>

long long int formula(long long  int n){
	return ( (n * (n + 1)) / 2 );
}

int main(){
	long long int n, sum = 0, num, i;

	scanf("%lld",&n);

	for(i = 0; i < n; i++){
		scanf("%lld",&num);
		sum += num;
	}

	(formula(n) == sum) ? printf("YES\n") : printf("NO\n");

	return 0;
}