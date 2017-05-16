#include <cstdio>

#define MAXN 22

using namespace std;

bool solve(int set[], int start, int end, int goal, int sum){
	if(sum == goal)
		return true;
	if(sum > goal || start >= end)
		return false;
	return solve(set, start + 1, end, goal, sum) || solve(set, start + 1, end, goal, sum + set[start]);
}

int main(){
	int tc, n, m, set[MAXN];
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d %d",&n,&m);
		for(int i = 0; i < n; i++)
			scanf("%d",&set[i]);
		(solve(set, 0, n, m, 0)) ? printf("Yes\n") : printf("No\n");
	}
	return 0;
}
