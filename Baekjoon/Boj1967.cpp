#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, longest, start_node, chk[10001];
vector<pii> t[10001];

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
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        t[a].push_back(pii(b, c));
        t[b].push_back(pii(a, c));
    }
    dfs(1, 0);
    longest = 0;
    for(int i = 1; i <= n; i++) chk[i] = 0;
    dfs(start_node, 0);
    printf("%d", longest);
    return 0;
}