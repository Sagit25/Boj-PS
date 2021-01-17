#include <bits/stdc++.h>
using namespace std;

int n, p[1001], dp[1001];

int main(){
    scanf("%d", &n);
    for(int i = 1; i<= n; i++) scanf("%d", &p[i]);
    dp[1] = p[1];
    for(int i = 2; i <= n; i++){
        dp[i] = p[i];
        for(int j = 1; j <= i-1; j++){
            dp[i] = max(dp[i], dp[j]+dp[i-j]);
        }
    }
    printf("%d", dp[n]);
    return 0;
}