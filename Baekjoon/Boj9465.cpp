#include <bits/stdc++.h>
using namespace std;

int t, n, a[100001][2], dp[100001][2];

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) scanf("%d", &a[i][0]);
        for(int i = 1; i <= n; i++) scanf("%d", &a[i][1]);
        dp[1][0] = a[1][0]; dp[1][1] = a[1][1];
        for(int i = 2; i<= n; i++){
            dp[i][0] = max(dp[i-1][1], dp[i-2][1]) + a[i][0];
            dp[i][1] = max(dp[i-1][0], dp[i-2][0]) + a[i][1];
        }
        printf("%d\n", max(dp[n][0], dp[n][1]));
    }
    return 0;
}