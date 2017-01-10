#include <cstdio>
#include <cstring>

#define MAX 10050

using namespace std;

bool solve(char one[], char two[], int len){
	int asciiOne[256], asciiTwo[256];
	for(int i = 97; i <= 122; i++)
		asciiOne[i] = asciiTwo[i] = 0;
	for(int i = 0; i < len; i++){
		asciiOne[one[i]]++;
		asciiTwo[two[i]]++;
	}
	for(int i = 97; i <= 122; i++)
		if(asciiOne[i] != asciiTwo[i])
			return false;
	return true;
}

int main(){
	int tc, len, divi;
	char str[MAX], one[MAX], two[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%s",str);
		len = strlen(str);

		divi = len / 2;
		strncpy(one, str, divi);
		one[divi] = '\0';

		if(len % 2 == 0)
			strncpy(two, str + divi, len);
		else
			strncpy(two, str + divi + 1, len);
		two[divi] = '\0';

		(solve(one,two,divi)) ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}