/* Dijkstra Algorithm */
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii; 

int v, e, k, ans[20005];
vector <pii> d[20005];
bool chk[20005];

/* TLE Code
int Dijkstra(int x){
    for(int i = 1; i <= v; i++){
        ans[i] = INT_MAX;
    }
    ans[k] = 0;
    for(int i = 0; i < v; i++){
        int res = INT_MAX, now;
        for(int j = 1; j <= v; j++){
            if(chk[j]) continue;
            if(ans[j] < res){
                res = ans[j];
                now = j;
            }
        }
        for(pii i: d[now]){
            int next = i.first;
            ans[next] = min(ans[next], ans[now] + i.second);
        }
        chk[now] = true;
    }
    return 0;
}
*/

int Dijkstra(int x){
    for(int i = 1; i <= v; i++) ans[i] = INT_MAX;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    ans[k] = 0;
    pq.push(pii(0,x));
    while(!pq.empty()){
        pii p = pq.top();
        pq.pop();
        int now = p.second;
        int nowcost = p.first;
        if(ans[now] < nowcost) continue;
        for(pii i: d[now]){
            int next = i.first;
            int nextcost = nowcost + i.second;
            if(nextcost < ans[next]){
                ans[next] = nextcost;
                pq.push(pii(ans[next], next));
            }
        }
    }
    return 0;
}

int main(){
    scanf("%d %d %d", &v, &e, &k);
    for(int i = 1; i<= e; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        d[a].push_back(pii(b,c));
    }
    Dijkstra(k);
    for(int i = 1; i <= v; i++){
        if(ans[i] == INT_MAX) printf("INF\n");
        else printf("%d\n", ans[i]);
    }
    return 0;
}