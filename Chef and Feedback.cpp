#include <cstdio>
#include <cstring>

#define MAX 100050

using namespace std;

bool check(int len, char feedback[]){
	for(int i = 0; i < len; i++)
		if( (i + 2 < len) && ( (feedback[i] == '0' && feedback[i + 1] == '1' && feedback[i + 2] == '0') || (feedback[i] == '1' && feedback[i + 1] == '0' && feedback[i + 2] == '1') ) )
			return true;
	return false;
}

int main(){
	int tc, len;
	char feedback[MAX];

	scanf("%d",&tc);

	while(tc--){
		scanf("%s",feedback);
		len = strlen(feedback);
		(check(len, feedback)) ? printf("Good\n") : printf("Bad\n");
	}
	
	return 0;
}