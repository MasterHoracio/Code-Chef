#include <stdio.h>

int main(){
	int tc, n, c, q, dif, difL, difR, L, R, i;

	scanf("%d",&tc);

	while(tc--){

		scanf("%d %d %d",&n,&c,&q);

		for(i = 0; i < q; i++){
			scanf("%d %d",&L,&R);
			if(c >= L && c <= R){
				dif = R - L;
				difR = R - c;
				difL = c - L;
				if(difR > difL){
					if(dif - difR == 0)
						c = R;
					else
						c = R - difL;
				}else if(difL > difR){
					if(dif - difL == 0)
						c = L;
					else
						c = L + difR;
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}