#include <bits/stdc++.h>
using namespace std;
char S[1000001];
int a, b, freq[26];
int main(){
    scanf("%s", S);
    a = strlen(S);
    for(int i = 0; i < a; i++)
        freq[(int) (S[i]-'A')]++;
  b = -1;
    for(int i = 0; i < 26; i++){
        if(freq[i]&1){
            if(b != -1){
                printf("NO SOLUTION\n");
                return 0;
            } else {
           b = i;
        }
     }
  }
for(int i = 0; i < 26; i++)
        for(int j = 0; j < freq[i]/2; j++)
            printf("%c", (char) (i+'A'));
 if(b != -1)
        printf("%c", (char) (b+'A'));
 for(int i = 25; i >= 0; i--)
        for(int j = 0; j < freq[i]/2; j++)
            printf("%c", (char) (i+'A'));
}
