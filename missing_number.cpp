#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(){
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
        c ^= i;
    for(int i = 0; i < a-1; i++){
        scanf("%d", &b);
        c ^= b;
    }
    printf("%d\n", c);
}
