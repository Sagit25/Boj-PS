#include <bits/stdc++.h>
using namespace std;

int a, b, t;

int main(){
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    return 0;
}