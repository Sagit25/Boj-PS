#include <bits/stdc++.h>
using namespace std;

int n, a[301], dp[301][3], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    dp[1][0] = dp[1][1] = a[1];
    for(int i = 2; i <= n; i++){
        dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + a[i];
        dp[i][1] = dp[i-1][0] + a[i];
    }
    ans = max(dp[n][0], dp[n][1]);
    printf("%d", ans);
    return 0;
}