#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1000000000;
int n, k;
ll dp[201][201];

int main(){
    scanf("%d %d", &n, &k);
    dp[0][0] = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= k; j++){
            for(int t = 0; t <= i; t++){
                dp[i][j] += dp[t][j-1];
                dp[i][j] %= mod;
            } 
        }
    }
    printf("%d", dp[n][k] % mod);
    return 0;
}