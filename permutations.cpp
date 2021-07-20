#include <bits/stdc++.h>
using namespace std;
int a;
int main(){
    scanf("%d", &a);
    if(a == 1)      printf("1 ");
    else if(a <= 3) printf("NO SOLUTION\n");
    else {
        for(int i = 2; i <= a; i += 2)
            printf("%d ", i);
        for(int i = 1; i <= a; i += 2)
            printf("%d ", i);
    }
}
