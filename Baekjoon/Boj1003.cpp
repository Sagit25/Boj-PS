#include <bits/stdc++.h>
using namespace std;

int t, n, f1[41], f0[41];

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        f0[0] = f1[1] = 1;
        f1[0] = f0[1] = 0;
        for(int i = 2; i <= n; i++){
            if(f0[i] != 0 && f1[i] != 0) continue;
            f0[i] = f0[i-1] + f0[i-2];
            f1[i] = f1[i-1] + f1[i-2];
        }
        printf("%d %d\n", f0[n], f1[n]);
    }
    return 0;
}