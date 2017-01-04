#include <cstdio>

using namespace std;

int main(){
	int a, b, ans, mod;

	scanf("%d %d",&a,&b);

	ans = a - b;
	mod = ans % 10;
	ans /= 10;
	(mod == 0) ? mod++ : (mod == 9) ? mod-- : mod++;
	
	printf("%d\n",ans * 10 + mod);
	
	return 0;
}