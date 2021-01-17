#include <bits/stdc++.h>
using namespace std;

int n, p[100001];
vector <int> v[100001];
queue <int> q;

int main(){
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    q.push(1);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < v[x].size(); i++){
            if(p[v[x][i]] != 0) continue;
            p[v[x][i]] = x;
            q.push(v[x][i]);
        }
    }
    for(int i = 2; i <= n; i++) printf("%d\n", p[i]);
    return 0;
}