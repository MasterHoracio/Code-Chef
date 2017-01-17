#include <stdio.h>

#define MAX 105

void QuickSort(int left, int right, int Weighs[]){
	int i = left, j = right, pivot, tmp;
	pivot = Weighs[ (left + right) / 2];

	while(i <= j){
		while(Weighs[i] < pivot)
			i++;
		while(Weighs[j] > pivot)
			j--;
		if(i <= j){
			tmp = Weighs[i];
			Weighs[i] = Weighs[j];
			Weighs[j] = tmp;
			i++;
			j--;
		}
	}

	if(left < j)
		QuickSort(left, j, Weighs);
	if(i < right)
		QuickSort(i, right, Weighs);
}

int main(){
	int tc, N, K, Weighs[MAX], i, aux;
	long long ans, boy;

	scanf("%d",&tc);

	while(tc--){
		scanf("%d %d",&N,&K);

		boy = ans = 0;

		for(i = 0; i < N; i++){
			scanf("%d",&Weighs[i]);
			ans += Weighs[i];
		}

		QuickSort(0, N - 1, Weighs);

		aux = N - K;
		if(aux < K)
			K = aux;

		for(i = 0; i < K; i++)
			boy += Weighs[i];

		printf("%lld\n",ans - (boy * 2) );
	}
	return 0;
}