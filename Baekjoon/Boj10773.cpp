#include<bits/stdc++.h>
using namespace std;

int k, ans;
stack <int> s;

int main(){
    scanf("%d", &k);
    while(k--){
        int x;
        scanf("%d", &x);
        if(x == 0){
            ans -= s.top();
            s.pop();
        }
        else{
            s.push(x);
            ans += x;
        }
    }
    printf("%d", ans);
    return 0;
}