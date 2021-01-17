#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x, t, a[101];
vector<int> v;

int gcd(ll a, ll b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
    sort(a, a + n);
    x = a[1] - a[0];
    for(int i = 2; i < n; i++) x = gcd(x, a[i] - a[i-1]);
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0){
            v.push_back(i);
            v.push_back(x/i);
        }           
    }
    v.push_back(x);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < v.size(); i++) printf("%d ", v[i]);
    return 0;
}