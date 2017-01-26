#include <stdio.h>
#include <string.h>

#define MAX 100005

int solve(char str[]){
	int ans = 0, sz = strlen(str), i;

	for(i = 0; i < sz; i++)
		if(str[i] != '4' && str[i] != '7')
			ans++;
		
	return ans;
}

int main(){
	int tc;
	char str[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%s",str);
		printf("%d\n",solve(str));
	}

	return 0;
}