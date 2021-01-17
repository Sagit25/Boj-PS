#include <bits/stdc++.h>
using namespace std;

int n, sum;
char c;

int main(){
    scanf("%d\n", &n);
    for(int i = 1; i <= n; i++){
        scanf("%c", &c);
        sum += c-'0';
    }
    printf("%d", sum);
}