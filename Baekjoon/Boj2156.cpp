#include <bits/stdc++.h>
using namespace std;

int n, ans, a[10005], dp[10005];

int main(){
    scanf("%d", &n);
    for(int i = 3; i < n+3; i++) scanf("%d", &a[i]);
    for(int i = 3; i < n+3; i++){
        dp[i] = max(dp[i-3] + a[i-1] + a[i], dp[i-2] + a[i]);
        dp[i] = max(dp[i-1], dp[i]);
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
    return 0;
}