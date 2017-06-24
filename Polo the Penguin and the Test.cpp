#include <cstdio>
#include <algorithm>

#define LIMITS 101

using namespace std;

int main(){
	int tc, n, w, dp[LIMITS][LIMITS], time[LIMITS], total[LIMITS], tests, points;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d %d",&n,&w);
		
		for(int i = 1; i <= n; i++){
			scanf("%d %d %d",&tests,&points,&time[i]);
			total[i] = tests * points;
		}
		
		for(int i = 1; i <= n; i++)
			fill(dp[i], dp[i] + LIMITS, 0);
			
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= w; j++){
				if(time[i] > j){
					dp[i][j] = dp[i - 1][j];
				}else{
					dp[i][j] = max(dp[i - 1][j - time[i]] + total[i], dp[i - 1][j]);
				}
			}
		}
		
		printf("%d\n",dp[n][w]);
	}
}
