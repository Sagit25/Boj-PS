#include <bits/stdc++.h>
using namespace std;

int m, n, a[501][501], dp[501][501];

int f(int x, int y){
    if(x < 1 || y < 1 || x > m || y > n) return 0;
    if(dp[x][y] != -1) return dp[x][y];
    if(x == 1 && y == 1) return dp[x][y] = 1;
    dp[x][y] = 0;
    if(a[x][y] < a[x-1][y]) dp[x][y] += f(x-1,y);
    if(a[x][y] < a[x+1][y]) dp[x][y] += f(x+1,y);
    if(a[x][y] < a[x][y-1]) dp[x][y] += f(x,y-1);
    if(a[x][y] < a[x][y+1]) dp[x][y] += f(x,y+1);
    return dp[x][y];
}

int main(){
    scanf("%d %d", &m, &n);
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
            dp[i][j] = -1;
        }
    }
    printf("%d", f(m, n));
    return 0;
}