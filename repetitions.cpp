#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e6+5;
char a[maxN];
int b, c, d;
int main(){
    scanf(" %s", a);
    b = strlen(a);
    c = d = 1;
    for(int i = 1; i < b; i++){
        if(a[i] == a[i-1])  c++;
        else               c = 1;
        d = max(d, c);
    }
    printf("%d\n", d);
}
