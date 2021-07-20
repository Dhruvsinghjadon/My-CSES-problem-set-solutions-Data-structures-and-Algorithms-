#include <bits/stdc++.h>
using namespace std;
long long a;
int main(){
    scanf("%lld", &a);
    while(a > 1){
        printf("%lld ", a);
        if(a&1) a = 3*a+1;
        else    a >>= 1;
    }
    printf("1\n");
}
