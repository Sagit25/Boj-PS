#include <bits/stdc++.h>
using namespace std;

int n;
char a[500][500];

void s(int l, int x, int y){
    if(l == 1){
        a[x][y] = '*';
        return;
    }
    int d = 4*l-3;
    for(int i = x; i < x+d; i++){
        a[i][y] = '*';
        a[i][y+d-1] = '*';
    }
    for(int i = y; i < x+d; i++){
        a[x][i] = '*';
        a[x+d-1][i] = '*';
    }
    s(l-1, x+2, y+2);
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < 4*n-3; i++){
        for(int j = 0; j < 4*n-3; j++) a[i][j] = ' ';
    }
    s(n, 0, 0);
    for(int i = 0; i < 4*n-3; i++){
        for(int j = 0; j < 4*n-3; j++) printf("%c", a[i][j]);
        printf("\n");
    }
    return 0;
}