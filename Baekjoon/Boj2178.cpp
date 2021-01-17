#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, m, a[101][101], chk[101][101];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
queue <pii> q;

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) scanf("%1d", &a[i][j]);
    }
    chk[1][1] = 1;
    q.push(pii(1,1));
    while(!q.empty()){
        pii now = q.front();
        q.pop();
        if(now.first < 1 || now.first > n || now.second < 1 || now.second > m) continue;
        for(int i = 0; i <= 3; i++){
            int x = now.first + dx[i];
            int y = now.second + dy[i];
            if(x < 1 || x > n || y < 1 || y > m || chk[x][y] != 0 || a[x][y] == 0) continue;
            chk[x][y] = chk[now.first][now.second] + 1;
            q.push(pii(x, y));
        }
    }
    printf("%d", chk[n][m]);
    return 0;
}