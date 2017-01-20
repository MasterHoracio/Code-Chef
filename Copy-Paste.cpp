#include <cstdio>
#include <map>

using namespace std;

int main(){
	int tc, n, num, ans;
	map <int, int> numbers;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&n);
		ans = 0;
		for(int i = 0; i < n; i++){
			scanf("%d",&num);
			if(!numbers[num]){
				numbers[num]++;
				ans++;
			}
		}
		numbers.clear();
		printf("%d\n",ans);
	}
	return 0;
}