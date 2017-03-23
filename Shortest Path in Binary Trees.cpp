#include <cstdio>

using namespace std;

int main(){
	int tc, i, j, ans;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&i,&j);

		ans = 0;

		while(i != j){
			if(i > j){
				i /= 2;
			}else{
				j /= 2;
			}
			ans++;
		}

		printf("%d\n",ans);
	}

	return 0;
}