#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
ll a[91];

int main(){
    scanf("%d", &n);
    a[1] = a[2] = 1;
    for(int i = 3; i <= n; i++) a[i] = a[i-1] + a[i-2];
    printf("%lld", a[n]);
    return 0;
}