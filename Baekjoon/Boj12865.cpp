/* 0/1 Knapsack Problem */
#include <bits/stdc++.h>
using namespace std;

int n, k, w[105], v[105], dp[105][100005];

int main(){
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        w[i] = a;
        v[i] = b;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if(j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    printf("%d", dp[n][k]);
    return 0;
}