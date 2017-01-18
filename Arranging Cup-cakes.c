#include <stdio.h>
#include <math.h>

#define MAX 10000000

long long int solve(long long n){
	long long int sq = sqrt(n), dif, min = MAX, i;
	for(i = 1; i <= sq; i++){
		if(n % i == 0){
			dif = (n / i) - i;
			if(dif < min)
				min = dif;
		}
	}
	return dif;
}

int main(){
	long long int tc, n;

	scanf("%lld",&tc);

	while(tc--){
		scanf("%lld",&n);
		printf("%lld\n",solve(n));
	}

	return 0;
}