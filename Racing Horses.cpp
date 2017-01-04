#include <cstdio>
#include <algorithm>

#define MAXN 5050
#define MAX 1000000000
#define abs(a) a < 0 ? (-a) : a;

using namespace std;

typedef long long int lld;

int main(){
	int tc, n, res;
	lld horses[MAXN], min;

	scanf("%d",&tc);

	while(tc--){

		scanf("%d",&n);
		for(int i = 0; i < n; i++)
			scanf("%lld",&horses[i]);

		sort(horses,horses + n);
		min = MAX;

		for(int i = 0; i < n - 1; i++){
			res = abs((horses[i] - horses[i + 1]));
			if(res < min)
				min = res;
		}

		printf("%lld\n",min);

	}
	return 0;
}