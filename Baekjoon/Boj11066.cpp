// 출처 : https://js1jj2sk3.tistory.com/3

// Solution 3 (Kruth's optimization)
#include <bits/stdc++.h>
using namespace std;
 
int dp2[501][501], num[501][501], novel[501], psum[501], T, N;

int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        for(int i = 1; i <= N; i++){
            scanf("%d", &novel[i]); 
            psum[i] = psum[i-1] + novel[i];
        }
        for(int i = 1; i <= N; i++) num[i-1][i] = i;
        for(int d = 2; d <= N; d++){
            for(int i = 0; i + d <= N; i++){
                int j = i+d;
                dp2[i][j] = 2e9;
                for(int k = num[i][j - 1]; k <= num[i + 1][j]; k++){
                    int v = dp2[i][k] + dp2[k][j] + psum[j] - psum[i];
                    if(dp2[i][j] > v){
                        dp2[i][j] = v;
                        num[i][j] = k;
                    }
                }
            }
        }
        printf("%d\n", dp2[0][N]);
    }
    return 0;
}



// Solution 1
/*
#include <bits/stdc++.h>
using namespace std;

int t, k, a[501], sum[501], dp[501][501];

int main(){
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &k);
        for(int j = 1; j = k; j++){
            scanf("%d", &a[j]);
            sum[j] = sum[j-1] + a[j];
        }
        for(int d = 1; d < k; d++){
            for(int tx = 1; tx + d <= k; tx++){
                int ty = tx + d;
                dp[tx][ty] = INT_MAX;
                for(int mid = tx; mid < ty; mid++){
                    dp[tx][ty] = min(dp[tx][ty], dp[tx][mid]+dp[mid+1][ty]+sum[ty]-sum[tx-1]);
                }
            }
        }
        printf("%d\n", dp[1][k]);
        for(int j = 1; j <= k; j++) a[j] = 0;
    }
    return 0;
}
*/


// Solution 2
/*
#include <bits/stdc++.h>
using namespace std;
 
int dp[501][501], cost[501], sum[501], t, k;
 
int dpf(int tx, int ty){
    if(dp[tx][ty] != 0x3f3f3f3f) return dp[tx][ty];
    if(tx == ty) return dp[tx][ty] = 0;
    if(tx + 1 == ty) return dp[tx][ty] = cost[tx] + cost[ty];
    for(int mid = tx; mid < ty; mid++){
        int left = dpf(tx, mid);
        int right = dpf(mid + 1, ty);
        dp[tx][ty] = min(dp[tx][ty], left + right);
    }
    return dp[tx][ty] += sum[ty] - sum[tx-1];
}
 
int main() {
    scanf("%d", &t);
    while(t--){
        memset(dp, 0x3f, sizeof(dp));
        scanf("%d", &k);
        for(int i = 1; i <= k; i++) {
            scanf("%d", &cost[i]);
            sum[i] = sum[i-1] + cost[i];
        }
        printf("%d\n", dpf(1, k));
    }
    return 0;
}
*/