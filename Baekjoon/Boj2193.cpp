#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, dp[91][2];

int main(){
    scanf("%lld", &n);
    dp[1][0] = 1; dp[1][1] = 1;
    for(ll i = 2; i <= n; i++){
        dp[i][0] = dp[i-1][1] + dp[i-1][0];
        dp[i][1] = dp[i-1][0];
    }
    printf("%lld", dp[n][1]);
    return 0;
}