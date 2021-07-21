#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N, p[20];
ll a, b, c;
int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &p[i]);
c = LONG_MAX;
    for(int i = 0; i < (1<<N); i++){
        a = 0; b = 0;
        for(int j = 0; j < N; j++){
            if(i&(1<<j))    a += p[j];
            else            b += p[j];
        }c = min(c, abs(a-b));
    }
    printf("%lld\n",c );
}
