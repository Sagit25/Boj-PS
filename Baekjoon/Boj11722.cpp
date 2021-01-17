#include <bits/stdc++.h>
using namespace std;

int n, a[1001], dp[1001], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i+1; j--){
            if(a[i] > a[j]) dp[i] = max(dp[i], dp[j]);
        }
        dp[i] += 1;
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
    return 0;
}