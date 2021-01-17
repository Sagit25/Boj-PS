#include <bits/stdc++.h>
using namespace std;

struct score{
    string s;
    int a, b, c;
};

int n;

bool cmp(score x, score y){
    if(x.a > y.a) return true;
    if(x.a == y.a && x.b < y.b) return true;
    if(x.a == y.a && x.b == y.b && x.c > y.c) return true;
    if(x.a == y.a && x.b == y.b && x.c == y.c && x.s[0] < y.s[0]) return true;
    return false;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> n;
    vector<score> p(n);
    for(int i = 0; i < n; i++) cin >> p[i].s >> p[i].a >> p[i].b >> p[i].c;
    sort(p.begin(), p.end(), cmp);
    for(int i = 0; i < n; i++) cout << p[i].s << '\n';
    return 0;
}