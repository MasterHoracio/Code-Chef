#include <cstdio>
#include <cmath>

using namespace std;

void solve(int n, int m, int *subset){
	int sum;
	for(int i = 1; i < pow(2.0,n); i++){
		sum = 0;
		for(int j = 0; j < n; j++)
			if(i&(1<<j))
				sum += subset[j];
		if(sum == m){
			printf("Yes\n");
			return;
		}
	}
	printf("No\n");
}

int main(){
	int tc, n, m, subset[25];

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&n,&m);
		for(int i = 0; i < n; i++)
			scanf("%d",&subset[i]);
		solve(n, m, subset);
	}

	return 0;
}