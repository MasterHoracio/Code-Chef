#include <cstdio>
#include <cstring>

#define MAXN 40050
#define ASC 255

using namespace std;

int main(){
    int ASCII_BASE[ASC], ASCII[ASC], tc, n, len;
    char A[MAXN], B[MAXN], C[MAXN];
    bool ans;

    scanf("%d",&tc);

    while(tc--){
        scanf("%s %s",A,B);

        memset(ASCII_BASE, 0, sizeof(ASCII_BASE));
        memset(ASCII, 0, sizeof(ASCII));

        len = strlen(A);

        for(int i = 0; i < len; i++)
            ASCII_BASE[A[i]]++;

        len = strlen(B);

        for(int i = 0; i < len; i++)
            ASCII_BASE[B[i]]++;

        scanf("%d",&n);

        for(int i = 0; i < n; i++){
            scanf("%s",C);
            len = strlen(C);
            for(int j = 0; j < len; j++)
                ASCII[C[j]]++;
        }

        ans = true;
        for(int i = 97; i <= 122; i++)
            if(ASCII_BASE[i] < ASCII[i])
                ans = false;

        (ans) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}
