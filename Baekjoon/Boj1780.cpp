#include <bits/stdc++.h>
using namespace std;

int n, a[2200][2200], p, q, r;

int f(int x, int y, int l){
    int sum = 0, flag = 0;
    for(int i = x; i < x + l; i++){
        for(int j = y; j < y + l; j++){
            if(a[i][j] != 0) flag = 1;
            sum += a[i][j];
        }
    } 
    if(sum == l*l) p++;
    else if(sum == 0 && flag == 0) q++;
    else if(sum == -l*l) r++;
    else{
        f(x, y, l/3); f(x+l/3, y, l/3); f(x+2*l/3, y, l/3);
        f(x, y+l/3, l/3); f(x+l/3, y+l/3, l/3); f(x+2*l/3, y+l/3, l/3);
        f(x, y+2*l/3, l/3); f(x+l/3, y+2*l/3, l/3); f(x+2*l/3, y+2*l/3, l/3);       
    }
    return 0;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    f(0, 0, n);
    printf("%d\n", r);    
    printf("%d\n", q);    
    printf("%d\n", p);    
    return 0;
}