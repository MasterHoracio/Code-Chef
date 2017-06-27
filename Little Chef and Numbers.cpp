#include <cstdio>

using namespace std;

typedef long long int lld;

int main(){
	lld tc, n, count, num, twos;
	
	scanf("%lld",&tc);
	
	while(tc--){
		scanf("%lld",&n);
		twos = count = 0;
		for(int i = 0; i < n; i++){
			scanf("%lld",&num);
			if(num > 2)
				count++;
			if(num == 2)
				twos++;
		}
		
		printf("%lld\n", ((count * (count - 1))/2)  + (twos * count) );
	}
	
	return 0;
}
