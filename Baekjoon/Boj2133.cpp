#include <bits/stdc++.h>
using namespace std;

int n, a[31], b[31], c[31];

int main(){
    scanf("%d", &n);
    a[1] = c[1] = 0; b[1] = 1; a[2] = 3; b[2] = 0; c[2] = 1; 
    for(int i = 3; i <= n; i++){
        a[i] = 2*c[i] + a[i-2] + 2*b[i-1];
        b[i] = c[i-1] + a[i-1];
        c[i] = b[i-1];
    }
    printf("%d", a[n]);
    return 0;
}