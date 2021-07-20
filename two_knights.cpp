#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a;
int main(){
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        ll cnt = 1LL + (i-1)*(i-2)/2;
        cnt = cnt * (i-1) * (i+4);
        printf("%lld\n", cnt);
    }
}
