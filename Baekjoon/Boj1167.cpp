#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int v, longest, start_node, chk[100001];
vector<pii> t[100001];

void dfs(int node, int len){
    chk[node] = 1;
    if(longest < len){
        longest = len;
        start_node = node;
    }
    for(int i = 0; i < t[node].size(); i++){
        int next = t[node][i].first;
        if(!chk[next]) dfs(next, len + t[node][i].second);
    }
    return;
}

int main(){
    scanf("%d", &v);
    for(int i = 1; i <= v; i++){
        int a, b, c;
        scanf("%d", &a);
        while(1){
            scanf("%d", &b);
            if(b == -1) break;
            scanf("%d", &c);
            t[a].push_back(pii(b, c));
        }
    }
    dfs(1, 0);
    longest = 0;
    for(int i = 1; i <= v; i++) chk[i] = 0;
    dfs(start_node, 0);
    printf("%d", longest);
    return 0;
}