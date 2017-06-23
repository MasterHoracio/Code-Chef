#include <iostream>
#include <string>

#define LIMITS 2020

using namespace std;

string chef = "CHEF";

bool match(string sub){
	bool fine = true;
	for(int i = 0; i < 4; i++)
		if(sub[i] != chef[i] && sub[i] != '?')
			fine = false;
	return fine;
}

void replace(string &word, int index){
	for(int i = 0; i < 4; i++)
		word[index++] = chef[i];
}

int main(){
	string word;
	int tc, len;
	
	cin >> tc;
	
	while(tc--){
		cin >> word;
		len = word.length();
		
		if(len < 4){
			for(int i = 0; i < len; i++)
				if(word[i] == '?')
					word[i] = 'A';
		}else{
			for(int i = len - 4; i >= 0; i--)
				if(match(word.substr(i, 4)))
					replace(word, i);

			for(int i = 0; i < len; i++)
				if(word[i] == '?')
					word[i] = 'A';
		}
		cout << word << endl;
	}
	
	return 0;
}
