#include <bits/stdc++.h>
using namespace std;

int n, k, dp[10001];

int main() {
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = a[i]; j <= k; j++){
            if(j-a[i] >= 0) dp[j] += dp[j-a[i]];
        } 
    } 
    printf("%d\n", dp[k]);
    return 0;
}
