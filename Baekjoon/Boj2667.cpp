#include <bits/stdc++.h>
using namespace std;

int n, a[26][26], ans = 2, b[630];

int BFS(int x, int y){
    if(a[x][y] != 1 || x < 1 || x > n || y < 1 || y > n) return 0;
    b[ans]++;
    a[x][y] = 0;
    BFS(x, y-1);
    BFS(x, y+1);
    BFS(x-1, y);
    BFS(x+1, y);
    return 0;
}

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) scanf("%1d", &a[i][j]);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                ans++;
                BFS(i, j);
            }
        }
    }
    printf("%d\n", ans-2);
    sort(b+3, b+ans+1);
    for(int i = 3; i <= ans; i++) printf("%d\n", b[i]);
    return 0;
}