#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i == 1){
            for(int j = 1; j <= n-1; j++) printf(" ");
            printf("*");
        }
        else if(i == n) for(int j = 1; j <= 2*n-1; j++) printf("*");
        else{
            for(int j = 1; j <= n-i; j++) printf(" ");
            printf("*");
            for(int j = 1; j <= 2*i-3; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}