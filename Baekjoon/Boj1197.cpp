/* MST(Minimum Spaning Tree) */
#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> pii;

int n, m, chk[10010];
vector <pii> adj[10010];
priority_queue<pii, vector<pii>, greater<pii>> pq;

void prim(){
    int ans = 0;
    pq.push({0, 1});
    for(int i = 1; i <= n; i++){
        int now = -1, md = INT_MAX;
        while(!pq.empty()){
            now = pq.top().second;
            if(!chk[now]){
                md = pq.top().first;
                break;
            }
            pq.pop();
        }
        if(md == INT_MAX){
            printf("Impossible");
            return;
        }
        ans += md;
        chk[now] = 1;
        for(auto e : adj[now]){
            pq.push(e);
        }
    }
    printf("%d", ans);
    return;
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= m; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    prim();
    return 0;
}