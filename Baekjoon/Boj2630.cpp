#include <bits/stdc++.h>
using namespace std;

int n, a[129][129], w, b;

int f(int x, int y, int l){
    int sum = 0;
    for(int i = x; i < x + l; i++){
        for(int j = y; j < y + l; j++){
            sum += a[i][j];
        }
    } 
    if(sum == l * l) b += 1;
    else if(sum == 0) w += 1;
    else{
        f(x, y, l/2);
        f(x+l/2, y, l/2);
        f(x, y+l/2, l/2);
        f(x+l/2, y+l/2, l/2);
    }
    return 0;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    f(0, 0, n);
    printf("%d\n", w);
    printf("%d\n", b);
    return 0;
}