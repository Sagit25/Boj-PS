#include <bits/stdc++.h>
using namespace std;

int x, y;

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    printf("%d", x*y/gcd(x,y));
    return 0;
}