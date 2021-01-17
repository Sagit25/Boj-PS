#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, dp[101][10], ans;

int main(){
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            if(i == 1) dp[i][j] = 1;
            else{
                if(j - 1 >= 0) dp[i][j] += dp[i-1][j-1];
                if(j + 1 <= 9) dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= 1000000000;
            }
        }
    }
    for(int i = 1; i <= 9; i++) ans += dp[n][i];
    ans %= 1000000000;
    printf("%lld", ans);
    return 0;
}