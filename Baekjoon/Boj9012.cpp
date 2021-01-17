#include<bits/stdc++.h>
using namespace std;

string s;
int sum, t, flag;

int main(){
    cin >> t;
    while(t--){
        sum = flag = 0;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') sum++;
            else sum--;
            if(sum < 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1) printf("NO\n");
        else if(sum == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}