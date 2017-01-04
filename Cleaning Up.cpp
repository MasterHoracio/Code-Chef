#include <cstdio>
#include <vector>
#include <algorithm>

#define MAX 1010

using namespace std;

int main(){
	vector <int> chef, assistant;
	int tc, n, m, index, cont, len;
	bool jobs[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&n,&m);
		fill(jobs, jobs + n + 1, false);

		for(int i = 0; i < m; i++){
			scanf("%d",&index);
			jobs[index] = true;
		}

		cont = 1;

		for(int i = 1; i <= n; i++){
			if(jobs[i] == false){
				( (cont % 2) != 0) ? chef.push_back(i) : assistant.push_back(i);
				cont++;	
			}
		}

		len = chef.size();
		for(int i = 0; i < len; i++)
			(i + 1 < len) ? printf("%d ",chef[i]) : printf("%d",chef[i]);
		printf("\n");

		len = assistant.size();
		for(int i = 0; i < len; i++)
			(i + 1 < len) ? printf("%d ",assistant[i]) : printf("%d",assistant[i]);
		printf("\n");

		chef.clear();
		assistant.clear();

	}
	return 0;
}