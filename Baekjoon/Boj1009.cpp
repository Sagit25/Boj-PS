#include <bits/stdc++.h>
using namespace std;

int t, a, b, ans;

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        ans = 1;
        b = b % 4 + 4;
        while(b--) ans = (ans * (a % 10) )% 10;
        if(ans == 0) printf("10\n");
        else printf("%d\n", ans);
    }
    return 0;
}