#include <bits/stdc++.h>
using namespace std;

int n, a[1001], dp[1001], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i-1; j++){
            if(a[i] > a[j]) dp[i] = max(dp[i], dp[j]);
        }
        dp[i] += a[i];
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
    return 0;
}