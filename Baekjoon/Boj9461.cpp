#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n;
ll dp[101];

int main(){
    scanf("%d", &t);
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i < 101; i++) dp[i] = dp[i-3] + dp[i-2];
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        printf("%lld\n", dp[n]);
    }
    printf("\n");
    return 0;
}