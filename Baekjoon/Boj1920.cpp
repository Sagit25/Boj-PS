#include <bits/stdc++.h>
using namespace std;

int n, m, x;
vector <int> v;

int bs(int x, int y, int z){
    if(y < x) return 0;
    else{
        int h = (x+y)/2;
        if(v[h] == z) return 1;
        else if(v[h] > z) return bs(x, h-1, z);
        else return bs(h+1, y, z);
    }
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){            
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &x);
        printf("%d\n", bs(0, n-1, x));
    }
    return 0;
}