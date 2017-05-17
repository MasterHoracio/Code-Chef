#include <cstdio>
#include <utility>

#define MAXN 100010

using namespace std;

typedef long long int lld;

int main(){
	int tc, n, profit, stones[MAXN];
	lld k, max, div, curr_profit;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d %lld",&n,&k);
		max = -9999;
		
		for(int i = 0; i < n; i++)
			scanf("%d",&stones[i]);
			
		for(int i = 0; i < n; i++){
			scanf("%d",&profit);
			div = k / stones[i];
			curr_profit = div * profit;
			if(max < curr_profit)
				max = curr_profit;
		}
		
		printf("%lld\n",max);
	}
}
