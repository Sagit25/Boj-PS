#include <bits/stdc++.h>
using namespace std;

int n, ans, a[1001], dp[1001][2];

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]) dp[i][0] = max(dp[i][0], dp[j][0]+1);
        }
    }
    for(int i = n; i >= 1; i--){
        for(int j = n+1; j > i; j--){
            if(a[j] < a[i]) dp[i][1] = max(dp[i][1], dp[j][1]+1);
        }
    }
    for(int i = 1; i <= n; i++) ans = max(ans, dp[i][0] + dp[i][1]);
    printf("%d", ans-1);
    return 0;
}