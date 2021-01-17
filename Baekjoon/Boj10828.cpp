#include <bits/stdc++.h>
using namespace std;

int n, x;
string s;
stack <int> st;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n--){
        cin >> s;
        if(s == "push"){
            cin >> x;
            st.push(x);
        }
        if(s == "pop"){
            if(st.empty()) printf("-1\n");
            else{
                printf("%d\n", st.top());
                st.pop();
            }
        } 
        if(s == "size") printf("%d\n", st.size());
        if(s == "empty"){
            if(st.empty()) printf("1\n");
            else printf("0\n");
        }
        if(s == "top"){
            if(st.empty()) printf("-1\n");
            else printf("%d\n", st.top());
        }
    }
    return 0;
}