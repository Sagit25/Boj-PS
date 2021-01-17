#include <bits/stdc++.h>
using namespace std;

int n;
queue <int> q;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) q.push(i);
    while(q.size() != 1){
        q.pop();
        int x = q.front();
        q.pop();
        q.push(x);
    }
    printf("%d", q.front());
    return 0;
}