#include <stdio.h>
#include <math.h>

#define MAX 3000
#define TRUE '1'
#define FALSE '0'

void computeCriba(char criba[]){
	int i, j;

	for(i = 0; i < MAX; i++)
		criba[i] = TRUE;

	for(i = 2; i <= sqrt(MAX); i++)
		if(criba[i] == TRUE)
			for(j = i; j < MAX / i; j++)
				criba[i * j] = FALSE;
}

int main(){
	int tc, x, y, sum, ans, i, cont;
	char criba[MAX];

	computeCriba(criba);

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&x,&y);
		sum = x + y;
		ans = 0;
		for(i = sum + 1; i < MAX; i++){
			if(criba[i] == TRUE){
				ans++;
				break;
			}else{
				ans++;
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}