#include <bits/stdc++.h>
using namespace std;

int n, k, arr[100001];
stack <int> s;
vector <char> v;

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 1; i <= n; i++){
        s.push(i);
        v.push_back('+');
        while(!s.empty() && s.top() == arr[k]){
            s.pop();
            v.push_back('-');
            k++;
        }
    }
    if(!s.empty()) printf("NO\n");
    else for(int i = 0; i < v.size(); i++) printf("%c\n", v[i]);
    return 0;
}