#include <bits/stdc++.h>
using namespace std;
int a, b;
int main(){
    scanf("%d", &a);
    while(a > 0){
        a /= 5;
        b+= a;
    }
    printf("%d\n", b);
}
