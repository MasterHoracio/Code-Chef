#include <cstdio>
#include <cstring>

#define ASCII 255
#define LIMITS 110

using namespace std;

int main(){
    int n, check[LIMITS][ASCII], len, min, pos;
    char word[LIMITS], ans[LIMITS];

    scanf("%d",&n);

    memset(check, 0, sizeof(check));

    for(int i = 0; i < n; i++){
        scanf("%s",word);
        len = strlen(word);
        for(int j = 0; j < len; j++)
            check[i][word[j]]++;
    }
    
    pos = 0;
    
    for(int j = 97; j <= 122; j++){
    	min = LIMITS;
    	for(int i = 0; i < n; i++){
    		if(check[i][j] < min)
    			min = check[i][j];
		}
		if(min > 0){
			for(int i = 0; i < min; i++)
				ans[pos++] = j;
		}
	}

	if(pos == 0){
		printf("no such string\n");
	}else{
		ans[pos++] = '\0';
		printf("%s\n",ans);
	}
    return 0;
}
