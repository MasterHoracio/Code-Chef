#include <cstdio>

using namespace std;

int main(){
	long long int n, tc;

	scanf("%lld",&tc);

	while(tc--){
		scanf("%lld",&n);
		( (n % 4) == 1) ? printf("ALICE\n") : printf("BOB\n");
	}
	return 0;
}