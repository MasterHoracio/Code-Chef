#include <cstdio>
#include <vector>

#define MAX 1005

using namespace std;

int solve(int N, int Array[], vector<int> Permutation[]){
	vector <bool> visited(N + 1,false);
	int ans = 0, pos;

	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			visited[i] = true;
			pos = i;
			Permutation[ans].push_back(pos);
			while(i != Array[pos]){
				visited[Array[pos]] = true;
				Permutation[ans].push_back(Array[pos]);
				pos = Array[pos];
			}
			visited[Array[pos]] = true;
			Permutation[ans].push_back(Array[pos]);
			ans++;
		}
	}

	return ans;
}

int main(){
	vector <int> Permutation[MAX];
	int N, Array[MAX], ans;

	scanf("%d",&N);

	for(int i = 1; i <= N; i++)
		scanf("%d",&Array[i]);

	ans = solve(N,Array,Permutation);

	printf("%d\n",ans);
	for(int i = 0; i < ans; i++)
		for(int j = 0; j < Permutation[i].size(); j++)
			(j + 1 < Permutation[i].size()) ? printf("%d ",Permutation[i][j]) : printf("%d\n",Permutation[i][j]);


	return 0;
}