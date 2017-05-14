#include <cstdio>

using namespace std;

int main(){
	int n, max, max_so_far, num;
	
	scanf("%d",&n);
	
	max = max_so_far = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%d",&num);
		if(num > 0)
			max_so_far++;
		else
			max_so_far = 0;
		if(max_so_far > max)
			max = max_so_far;
	}
	
	printf("%d\n",max);
	
	return 0;
}
