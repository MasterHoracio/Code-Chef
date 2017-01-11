#include <cstdio>
#include <cstring>

#define MAX 105

using namespace std;

void countCharacter(int ascii[], char str[]){
	int len = strlen(str);
	for(int i = 0; i < len; i++)
		ascii[str[i]]++;
}

int main(){
	int tc, asciiOne[255], asciiTwo[255], ans;
	char jewel[MAX], stone[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%s %s",jewel, stone);

		for(int i = 65; i <= 122; i++)
			asciiOne[i] = asciiTwo[i] = 0;

		ans = 0;
		countCharacter(asciiOne, jewel);
		countCharacter(asciiTwo, stone);

		for(int i = 65; i <= 122; i++)
			if(asciiOne[i] > 0 && asciiTwo[i] > 0)
					ans += asciiTwo[i];
		
		printf("%d\n",ans);
	}
	return 0;
}