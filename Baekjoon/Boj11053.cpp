#include <bits/stdc++.h>
using namespace std;

int n, ans, a[1001], dp[1001];

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(a[j] < a[i]) dp[i] = max(dp[i], dp[j]+1);
        }
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
    return 0;
}