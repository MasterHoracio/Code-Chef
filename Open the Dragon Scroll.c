#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX 35

typedef long long int lld;

lld solveBits(lld a, lld b, lld n, lld bit[]){
	lld onesA, zerosA, onesB, zerosB, ans, dif;
	ans = onesA = onesB = zerosA = zerosB = 0;
	int i, cont = TRUE;
	
	while(a || b){
		(a & 1) ? onesA++ : zerosA++;
		(b & 1) ? onesB++ : zerosB++;
		a >>= 1;
		b >>= 1;
	}

	dif = n - (onesA + zerosA);
	(dif >= 1) ? zerosA += dif : zerosA;
	dif = n - (onesB + zerosB);
	(dif >= 1) ? zerosB += dif : zerosB;

	for(i = (int)n; i >= 1; i--){
		if(onesA > 0 && zerosB > 0){
			ans += bit[i];
			onesA--;
			zerosB--;
		}else{
			if(onesB > 0 && zerosA > 0){
				ans += bit[i];
				onesB--;
				zerosA--;
			}else{
				cont = FALSE;
			}
		}
		if(cont == FALSE)
			break;
	}

	return ans;
}

void memo(lld bit[]){
	int i;
	bit[1] = 1;
	for(i = 2; i <= 30; i++)
		bit[i] = bit[i - 1] * 2;
}

int main(){
	lld tc, n, a, b, bit[MAX];

	scanf("%lld",&tc);

	memo(bit);

	while(tc--){
		scanf("%lld %lld %lld",&n,&a,&b);
		printf("%lld\n",solveBits(a, b, n, bit));
	}

	return 0;
}