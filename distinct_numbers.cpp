#include <bits/stdc++.h>
using namespace std;
int a, b;
set<int> S;
int main(){
    scanf("%d", &a);
      for(int i = 0; i < a; i++){
          scanf("%d", &b);
              S.insert(b);
    }
    printf("%d\n", (int) S.size());
}
