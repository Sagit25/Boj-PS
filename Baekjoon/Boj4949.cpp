#include<bits/stdc++.h>
using namespace std;

string s;
int flag;

int main(){
    while(true){
        flag = 0;
        stack <char> st;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            if(i == 0 && s[i] == '.') return 0;
            if(s[i] == '(' || s[i] == '[') st.push(s[i]);
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '(') st.pop();
                else{
                    flag = 1;
                    break;
                }
            }
            if(s[i] == ']'){
                if(!st.empty() && st.top() == '[') st.pop();
                else{
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1 || !st.empty()) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}