#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int a, b, l, ans, p[maxN];
int main(){
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++)
        scanf("%d", &p[i]);
    sort(p, p+a);
    l = 0;
    for(int r = a-1; r >= l; r--){
        if(p[l] + p[r] <= b)
            l++;
        ans++;
    }
    printf("%d\n", ans);
}
