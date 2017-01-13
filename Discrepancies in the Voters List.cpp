#include <cstdio>
#include <vector>
#include <map>

using namespace std;

int main(){
	map <int, int> voters;
	map <int, int>::iterator it;
	vector <int> list;
	int n1, n2, n3, voter;

	scanf("%d %d %d",&n1,&n2,&n3);

	for(int i = 0; i < n1 + n2 + n3; i++){
		scanf("%d",&voter);
		voters[voter]++;
	}

	for(it = voters.begin(); it != voters.end(); it++)
		if(it->second >= 2)
			list.push_back(it->first);
	
	printf("%lu\n",list.size());
	for(int i = 0; i < list.size(); i++)
		printf("%d\n",list[i]);

	return 0;
}