#include <bits/stdc++.h>
using namespace std;
typedef pair <string, int> psi;

int n, t, ans;
string a, b;

int main(){
    cin >> t;
    while(t--){
        ans = 1;
        psi p[31];
        int cnt = 0;
        cin >> n;
        while(n--){
            cin >> a >> b;
            int flag = 0;
            for(int i = 1; i <= cnt; i++){
                if(p[i].first == b){
                    p[i].second ++;
                    flag = 1;
                    break;
                } 
            }
            if(flag == 0){
                cnt++;
                p[cnt] = psi(b, 1);
            }
        }
        for(int i = 1; i <= cnt; i++) ans *= (p[i].second + 1);
        printf("%d\n", ans - 1);
    }
    return 0;
}