#include <bits/stdc++.h>
using namespace std;

int n, dp[1001][10], ans;

int main(){
    scanf("%d", &n);
    for(int i = 0; i <= 9; i++) dp[1][i] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = j; k <= 9; k++){
                dp[i][j] += dp[i-1][k];
                dp[i][j] %= 10007;
            } 
        }
    }
    for(int i = 0; i <= 9; i++) ans += dp[n][i];
    printf("%d", ans % 10007);
    return 0;
}