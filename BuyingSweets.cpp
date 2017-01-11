#include <cstdio>

#define MAX 105

using namespace std;

int main(){
	int tc, n, x, banknotes[MAX], min, acum;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&n,&x);
		min = MAX;
		acum = 0;
		for(int i = 0; i < n; i++){
			scanf("%d",&banknotes[i]);
			if(min > banknotes[i])
				min = banknotes[i];
			acum += banknotes[i];
		}
		if( (acum / x) == ((acum - min) / x) )
			printf("-1\n");
		else
			printf("%d\n",acum/x);

	}
	return 0;
}