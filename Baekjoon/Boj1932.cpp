#include <bits/stdc++.h>
using namespace std;

int n, a[501][501], dp[501][501], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) scanf("%d", &a[i][j]);
        for(int j = 1; j <= i; j++) dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + a[i][j];
    }
    for(int i = 1; i <= n; i++) ans = max(ans, dp[n][i]);
    printf("%d", ans);
    return 0;
}