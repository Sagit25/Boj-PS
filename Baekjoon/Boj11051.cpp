#include <bits/stdc++.h>
using namespace std;

int n, k, dp[1001][1001];
const int mod = 10007;

int main(){
    scanf("%d %d", &n, &k);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= min(i, k); j++){
            if(i == j || j == 0) dp[i][j] = 1;
            else dp[i][j] = ((dp[i - 1][j - 1] % mod) + (dp[i - 1][j] % mod)) % mod;
        }
    }
    printf("%d\n", dp[n][k]);
    return 0;
}