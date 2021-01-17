#include <bits/stdc++.h>
using namespace std;

int n, p[1001], ans;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &p[i]);
    sort(p + 1, p + n + 1);
    for(int i = 1; i <= n; i++) ans += p[i] * (n - i + 1);
    printf("%d", ans);
    return 0;
}