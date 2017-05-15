#include <cstdio>
#include <climits>

using namespace std;

typedef long long int lld;

int main(){
	int tc, n, min, num;
	lld sum;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d",&n);
		sum = 0;
		min = INT_MAX;
		for(int i = 0; i < n; i++){
			scanf("%d",&num);
			sum += num;
			if(num < min)
				min = num;
		}
		sum -= min;
		sum *= min;
		printf("%lld\n",sum);
	}
	
	return 0;
}
