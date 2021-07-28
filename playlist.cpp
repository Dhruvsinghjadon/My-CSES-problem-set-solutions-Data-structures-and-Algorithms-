#include <bits/stdc++.h>
using namespace std;
int N, m, l, ans;
map<int,int> mp;
int main(){
    scanf("%d", &N);
 l = 1;
     for(int r = 1; r <= N; r++){
          scanf("%d", &m);
               if(mp[m]){
     ans = max(ans, r-l);
            l = max(l, mp[m]+1);
            mp[m] = r;
        }
       else {
            ans = max(ans, r-l+1);
               mp[m] = r;
        }
    }

    ans = max(N-l+1, ans);
        printf("%d\n", ans);
}
