#include <bits/stdc++.h>
using namespace std;
 
int m, n, k, t, a[50][50], chk[50][50];
int dy[4]={1,-1,0,0}, dx[4]={0,0,1,-1};

void dfs(int y,int x){
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        if(a[ny][nx] && !chk[ny][nx]){
            chk[ny][nx]++;
            dfs(ny,nx);
        }
    }
}

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &m, &n, &k);
        memset(a,0,sizeof(a));
        memset(chk,0,sizeof(chk));
        int ans= 0, x, y;
        for(int i = 0; i < k; i++){
            scanf("%d %d", &x, &y);
            a[y][x] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ;j++){
                if(a[i][j] && !chk[i][j]){
                    ans++;
                    chk[i][j]++;
                    dfs(i,j);
                }
            } 
        }
        printf("%d\n", ans);
    }
    return 0;
}