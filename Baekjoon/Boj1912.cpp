#include <bits/stdc++.h>
using namespace std;

int n, a[100005], dp[100005][2], ans, flag, m = -INT_MAX;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        a[i] = x;
        if(x > 0) flag = 1;
        m = max(m, x);
    }
    if(flag == 0){
        printf("%d", m);
        return 0;
    }
    for(int i = 1; i <= n; i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = max(dp[i-1][1] + a[i], a[i]); 
    }
    ans = max(dp[n][0], dp[n][1]);
    printf("%d", ans);
    return 0;
}