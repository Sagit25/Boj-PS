#include <bits/stdc++.h>
using namespace std;

int n;
char tree[26][2] = { '.', };

void pre(char x){
    if(x == '.') return;
    else{
        printf("%c", x);
        pre(tree[x-'A'][0]);
        pre(tree[x-'A'][1]);
    }
}

void in(char x){
    if(x == '.') return;
    else{
        in(tree[x-'A'][0]);
        printf("%c", x);
        in(tree[x-'A'][1]);
    }
}

void post(char x){
    if(x == '.')return;
    else{
        post(tree[x-'A'][0]);
        post(tree[x-'A'][1]);
        printf("%c", x);
    }
}

int main(){
    scanf("%d", &n);
    char a, b, c;
    for(int i = 0; i < n; i++) {
        scanf(" %c %c %c", &a, &b, &c);
        tree[a-'A'][0] = b;
        tree[a-'A'][1] = c;
    }
    pre('A');
    printf("\n");
    in('A');
    printf("\n");
    post('A');
    return 0;
}