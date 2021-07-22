#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 2e5;
int a, p[maxN];
ll median, sum;
int main(){
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
        scanf("%d", &p[i]);
    sort(p, p+a);

    median = p[(a-1)/2];
    for(int i = 0; i < a; i++)
        sum += abs(p[i]-median);
    printf("%lld\n", sum);
}
