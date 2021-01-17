#include <bits/stdc++.h>
using namespace std;

int n, a[65][65];

int f(int x, int y, int l){
    int sum = 0;
    for(int i = x; i < x + l; i++){
        for(int j = y; j < y + l; j++){
            sum += a[i][j];
        }
    } 
    if(sum == l * l) printf("1");
    else if(sum == 0) printf("0");
    else{
        printf("(");
        f(x, y, l/2);
        f(x, y+l/2, l/2);
        f(x+l/2, y, l/2);
        f(x+l/2, y+l/2, l/2);
        printf(")");
    }
    return 0;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%1d", &a[i][j]);
    f(0, 0, n);
    return 0;
}