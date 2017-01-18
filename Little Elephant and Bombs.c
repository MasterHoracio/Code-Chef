#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX 1005

void computeOnes(int n, int destroy[], char map[]){
	int i;

	for(i = 0; i < n; i++)
		destroy[i] = FALSE;

	for(i = 0; i < n; i++){
		if(map[i] == '1'){
			destroy[i] = TRUE;
			if(i > 0 && i + 1 < n){
				destroy[i - 1] = TRUE;
				destroy[i + 1] = TRUE;
			}else{
				if(i == 0)
					destroy[i + 1] = TRUE;
				else
					destroy[i - 1] = TRUE;
			}
		}
	}
}

int main(){
	int tc, n, destroy[MAX], i, ans;
	char map[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&n);
		scanf("%s",map);

		computeOnes(n, destroy, map);

		ans = 0;

		for(i = 0; i < n; i++)
			if(destroy[i] != TRUE)
				ans++;

		printf("%d\n",ans);
	}
}