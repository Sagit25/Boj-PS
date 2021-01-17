#include <bits/stdc++.h>
using namespace std;

int n, m, ans, chk[101];
vector <int> v[101];

int DFS(int x){
    chk[x] = 1;
    ans++;
    for(int i = 0; i < v[x].size(); i++){
        if(chk[v[x][i]] == 0) DFS(v[x][i]);
    }
    return 0;
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1);
    printf("%d", ans-1);
    return 0;    
}