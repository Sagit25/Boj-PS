#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, dp[1001][4], a[1001][4], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d %d %d", &a[i][1], &a[i][2], &a[i][3]);
    for(int i = 1; i <= n; i++){
        dp[i][1] = min(dp[i-1][2], dp[i-1][3]) + a[i][1];
        dp[i][2] = min(dp[i-1][1], dp[i-1][3]) + a[i][2];
        dp[i][3] = min(dp[i-1][1], dp[i-1][2]) + a[i][3];
    }
    ans = min(dp[n][1], min(dp[n][2], dp[n][3]));
    printf("%d", ans);
    return 0;
}