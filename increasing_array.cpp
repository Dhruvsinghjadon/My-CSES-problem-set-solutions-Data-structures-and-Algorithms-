#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N;
ll a, x, b;
int main(){
    scanf("%d", &N);
    scanf("%lld", &x);
    for(int i = 1; i < N; i++){
        scanf("%lld", &a);
        x = max(x, a);
        b+= (x - a);
    }
    printf("%lld\n", b);
}
