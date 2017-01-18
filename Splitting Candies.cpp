#include <cstdio>

using namespace std;

typedef long long int lld;

int main(){
	lld tc, n, k, div, mod;

	scanf("%lld",&tc);

	while(tc--){
		scanf("%lld %lld",&n,&k);
		if(k > n || k == 0){
			printf("0 %lld\n",n);
		}else{
			if(n == 0){
				printf("0 0\n");
			}else{
				div = n / k;
				mod = n % k;
				printf("%lld %lld\n",div,mod);
			}
		}
	}
	return 0;
}