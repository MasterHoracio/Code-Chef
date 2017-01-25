#include <stdio.h>

int main(){
	long long int tc, n, ai, i;

	scanf("%lld",&tc);

	while(tc--){
		scanf("%lld",&n);
		for(i = 0; i < n; i++)
			scanf("%lld",&ai);
		printf("%lld\n",(n * (n - 1)) / 2);
	}
}