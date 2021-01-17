#include <bits/stdc++.h>
using namespace std;

int n, x;
string s;
queue <int> q;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n--){
        cin >> s;
        if(s == "push"){
            cin >> x;
            q.push(x);
        }
        if(s == "pop"){
            if(q.empty()) printf("-1\n");
            else{
                printf("%d\n", q.front());
                q.pop();
            }
        } 
        if(s == "size") printf("%d\n", q.size());
        if(s == "empty"){
            if(q.empty()) printf("1\n");
            else printf("0\n");
        }
        if(s == "front"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n", q.front());
        }
        if(s == "back"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n", q.back());
        }
    }
    return 0;
}