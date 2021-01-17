/* DFS, BFS */
#include <bits/stdc++.h>
using namespace std;

int n, m, v, chk[1005];
vector<int> t[1005];
queue<int> q;

int DFS(int x){
    printf("%d ", x);
    chk[x] = 1;
    for(int i = 0; i < t[x].size(); i++){
        if(chk[t[x][i]] == 0) DFS(t[x][i]);
    }
    return 0;
}

int BFS(int x){
    chk[x] = 1;
    q.push(x);
    while(!q.empty()){
        x = q.front();
        q.pop();
        printf("%d ", x);
        for(int i = 0; i < t[x].size(); i++){
            if(chk[t[x][i]] == 0){
                chk[t[x][i]] = 1;
                q.push(t[x][i]);
            } 
        }
    }
    return 0;
}

int main(){
    scanf("%d %d %d", &n, &m, &v);
    for(int i = 1; i <= m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        t[a].push_back(b);
        t[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        sort(t[i].begin(), t[i].end());
    }
    DFS(v);
    printf("\n");
    for(int i = 1; i <= n; i++){
        chk[i] = 0;
    }
    BFS(v);
    return 0;
}