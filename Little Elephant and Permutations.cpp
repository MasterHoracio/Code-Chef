#include <cstdio>

#define MAX 105

using namespace std;

int main(){
	int tc, n, permutation[MAX], inversions, local;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&n);
		inversions = local = 0;
		for(int i = 0; i < n; i++){
			scanf("%d",&permutation[i]);
			if(i != 0 && permutation[i - 1] > permutation[i])
				local++;
		}
		for(int i = 0; i < n; i++)
			for(int j = i + 1; j < n; j++)
				if(permutation[i] > permutation[j])
					inversions++;
		(inversions == local) ? printf("YES\n") : printf("NO\n");
	}
}