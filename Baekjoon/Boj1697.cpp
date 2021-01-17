#include <bits/stdc++.h>
using namespace std;

int n, k, chk[200001];
queue <int> q;

int main(){
    scanf("%d %d", &n, &k);
    chk[n] = 1;
    q.push(n);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == k) break;
        if(x-1 >= 0 && chk[x-1] == 0){
            chk[x-1] = chk[x] + 1;
            q.push(x-1);
        }
        if(x+1 <= 100000 && chk[x+1] == 0){
            chk[x+1] = chk[x] + 1;
            q.push(x+1);
        }
        if(2*x <= 200000 && chk[2*x] == 0){
            chk[2*x] = chk[x] + 1;
            q.push(2*x);
        }
    }
    printf("%d", chk[k]-1);
    return 0;
}
