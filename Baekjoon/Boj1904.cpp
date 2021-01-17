#include <bits/stdc++.h>
using namespace std;

int n, dp[1000001];
const int d = 15746;

int main(){
    scanf("%d", &n);
    dp[1] = 1;  
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
        dp[i] %= d;
    }
    printf("%d", dp[n]);
    return 0;
}