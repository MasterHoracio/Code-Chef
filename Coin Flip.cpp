#include <cstdio>

using namespace std;

typedef long long int lld;

int main(){
	int tc, g, l, q;
	lld n, head, tail;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&g);
		for(int i = 0; i < g; i++){
			scanf("%d %lld %d",&l,&n,&q);
			if(l == 1){
				if(n == 1){
					head = 0;
					tail = 1;
				}else{
					if(n % 2 == 0){
						tail = head = n / 2;
					}else{
						head = n / 2;
						tail = (n / 2) + 1;
					}
				}
			}else{
				if(n == 1){
					head = 1;
					tail = 0;
				}else{
					if(n % 2 == 0){
						tail = head = n / 2;
					}else{
						head = (n / 2) + 1;
						tail = n / 2;
					}
				}
			}
			(q == 1) ? printf("%lld\n",head) : printf("%lld\n",tail);
		}
	}

	return 0;
}