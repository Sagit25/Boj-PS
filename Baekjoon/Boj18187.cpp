#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <ll, ll> pii;

int n;
ll a[101];

int main(){
    scanf("%d", &n);
    int x = 3;
    a[1] = 2;
    a[2] = 4;
    a[3] = 7;
    for(int i = 4; i <= n; i++){
        a[i] = a[i - 1] + x;
        x += 1;
        if(i % 3 == 0) x -= 1;
    }
    printf("%d", a[n]);
    return 0;
}