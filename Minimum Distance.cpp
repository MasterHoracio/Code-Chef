#include <cstdio>

using namespace std;

int main(){
	int tc, x, y, z;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%d %d %d",&x,&y,&z);
		if(z >= x + y)
			printf("%d\n", z - (x + y));
		else if(x + y >= z && y + z >= x && x + z >= y)
			printf("0\n");
		else if(z + x < y)
			printf("%d\n",y - (x + z));
		else
			printf("%d\n",x - (y + z));
	}
	return 0;
}
