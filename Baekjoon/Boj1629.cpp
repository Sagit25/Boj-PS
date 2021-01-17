#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c, ans;

ll f(int x, int y){
    if(y == 0) return 1;
    else if(y == 1) return x%c;
    else{
        ll res = f(x, y/2);
        ans = ((res%c)*(res%c))%c;
        if(y % 2 == 1) ans = (ans*(x%c))%c;
    }
    return ans;
}

int main(){
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", f(a, b));
    return 0;
}