#include <bits/stdc++.h>
using namespace std;

int t, n, a[11];

int main(){
    a[1] = 1; a[2] = 2; a[3] = 4;
    for(int i = 4; i <= 11; i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
    }
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    return 0;
}