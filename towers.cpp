#include <bits/stdc++.h>
using namespace std;
int N, m;
multiset<int> S;
multiset<int>::iterator it;

int main(){
    scanf("%d", &N);
      for(int i = 0; i < N; i++){
        scanf("%d", &m);
          it = S.upper_bound(m);
             if(it != S.end())
                 S.erase(it);
                   S.insert(m);
    }
    printf("%d\n", (int) S.size());
}
