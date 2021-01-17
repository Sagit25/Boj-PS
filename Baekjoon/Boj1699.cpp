#include <bits/stdc++.h>
using namespace std;

int n, dp[100001];

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) dp[i]= INT_MAX;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 400; j++){
            if(j*j > i) break;
            dp[i] = min(dp[i], dp[i-j*j]);
        }
        dp[i]++;
    }
    printf("%d", dp[n]);
    return 0;
}