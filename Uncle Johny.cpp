#include <cstdio>

#define MAX 110

using namespace std;

typedef long long int lld;

int main(){
	int tc, ans, n, song;
	lld playlist[MAX], fit;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&n);
		for(int i = 1; i <= n; i++)
			scanf("%lld",&playlist[i]);
		scanf("%d",&song);

		fit = playlist[song];
		ans = 1;

		for(int i = 1; i <= n; i++)
			if(playlist[i] < fit)
				ans++;
		printf("%d\n",ans);
	}

}