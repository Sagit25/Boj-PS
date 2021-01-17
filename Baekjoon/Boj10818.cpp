#include <bits/stdc++.h>
using namespace std;

int n, M, m;

int main(){
    scanf("%d", &n);
    M = -INT_MAX;
    m = INT_MAX;
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        M = max(M, x);
        m = min(m, x);
    }
    printf("%d %d", m, M);
    return 0;
}