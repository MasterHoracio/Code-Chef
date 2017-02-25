#include <cstdio>

using namespace std;

int main(){
	long long int n, m, q, ans;

	scanf("%lld %lld",&n,&m);

	for(int i = 0; i < m; i++){
		scanf("%lld",&q);
		if(q <= (n + 1))
			ans = 0;
		else if(q <= ((2 * n) + 1))
			ans = q - (n + 1);
		else
			ans = (n * 3) - (q - 1);
		printf("%lld\n",ans);
	}

	return 0;
}