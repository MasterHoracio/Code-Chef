#include <stdio.h>
#include <string.h>

#define MAX 105
#define ASCII 255

void computeAlphabet(char alphabet[], char ascii[]){
	int posUp, posLow, i;

	posLow = 97;
	posUp = 65;

	for(i = 0; i < 26; i++){
		ascii[posLow] = alphabet[i];
		ascii[posUp] = alphabet[i] - 32;
		posLow++;
		posUp++;
	}
}

int main(){
	char alphabet[26], string[MAX], ascii[ASCII];
	int tc, len, i;

	scanf("%d %s",&tc,alphabet);
	computeAlphabet(alphabet,ascii);

	while(tc--){
		scanf("%s",string);

		len = strlen(string);

		for(i = 0; i < len; i++){
			if( (string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122) )
				printf("%c",ascii[string[i]]);
			else if(string[i] == '_')
				printf(" ");
			else
				printf("%c",string[i]);
		}printf("\n");
	}

	return 0;
}