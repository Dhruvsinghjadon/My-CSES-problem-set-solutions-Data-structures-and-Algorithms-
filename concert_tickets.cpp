#include <bits/stdc++.h>

using namespace std;

int a, b, c, t;
multiset<int> prices;

int main(){
    scanf("%d %d", &a, &b);
      for(int i = 0; i < a; i++){
         scanf("%d", &c);
             prices.insert(-c);
    }
    for(int i = 0; i < b; i++){
        scanf("%d", &t);
          if(prices.lower_bound(-t) == prices.end())
            printf("-1\n");
        else {
            printf("%d\n", -(*prices.lower_bound(-t)));
              prices.erase(prices.lower_bound(-t));
        }
    }
}
