#include <cstdio>
#include <cstring>

using namespace std;

int toMinutes(char *time){
	int minutes = 0;
	minutes += time[4] - '0' + (time[3] - '0') * 10;
	minutes += (time[1] - '0') * 60 + ((time[0] - '0') * 60) * 10;
	return minutes;
}

int main(){
	int tc, dist, t1, t2, av;
	char tNovia[5], tChef[5];
	double t_1, t_2;
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%s",tNovia);
		t1 = toMinutes(tNovia);
		scanf("%s",tChef);
		t2 = toMinutes(tChef);
		
		scanf("%d",&dist);
		
		t_1 = (t1 - t2) + dist;
		
		if(t1 - t2 >= (dist * 2)){
			t_2 = t1 - t2;
		}else{
			av = (dist * 2) - (t1 - t2);
			t_2 = (t1 - t2) + (double)av / 2;				
		}
		printf("%.1lf %.1lf\n",t_1,t_2);
	}
	return 0;
}
