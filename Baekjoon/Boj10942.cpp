#include <bits/stdc++.h>
using namespace std;

int n, m, a[100001], s, e, dp[2001][2001];

int f(int x, int y){
    if(dp[x][y] != -1) return dp[x][y];
    if(x == y) return dp[x][y] = 1;
    if(y == x + 1){
        if(a[x] == a[y]) return dp[x][y] = 1;
        else return dp[x][y] = 0;
    }
    if(a[x] == a[y]) dp[x][y] = f(x+1, y-1);
    else dp[x][y] = 0;
    return dp[x][y];
}

int main(){
    scanf("%d", &n);
    for(int i = 1; i<= n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int i = 1; i <= n; i++) for(int j = i; j <= n; j++) dp[i][j] = -1;
    for(int i = 1; i <= m; i++){
        scanf("%d %d", &s, &e);
        printf("%d\n", f(s, e));
    }
    return 0;
}
