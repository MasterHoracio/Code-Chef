#include <cstdio>

#define MAX 10050

using namespace std;

typedef long long int lld;

int main(){
	int tc, n, ans;
	lld cars[MAX], min;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&n);

		scanf("%lld",&cars[0]);
		ans = 1;
		min = cars[0];

		for(int i = 1; i < n; i++){
			scanf("%lld",&cars[i]);
			if(cars[i] <= min){
				min = cars[i];
				ans++;
			}
		}

		printf("%d\n",ans);
	}
	return 0;
}