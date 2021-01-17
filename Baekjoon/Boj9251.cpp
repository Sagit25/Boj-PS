/* LCS(Longest Common Subsequence) */
#include <bits/stdc++.h>
using namespace std;

string a, b;
int ans, la, lb, arr[1001][1001];

int main(){
    cin >> a >> b;
    a = '0' + a;
    b = '0' + b;

    la = a.length();
    lb = b.length();

    // Find LCS length
    int x;
    for(int i = 1; i < lb; i++){
        x = 0;
        arr[i][0] = 0;
        for(int j = 1; j < la; j++){
            if(b[i] == a[j]){
                x = arr[i-1][j-1]+1;
                arr[i][j]=x;
            }
            else{
                if(arr[i][j-1] > arr[i-1][j]) arr[i][j] = arr[i][j-1];
                else arr[i][j] = arr[i-1][j];
            }
        }
        if(ans < x) ans = x;
    }
    cout << ans << endl;

    /*
    // Find LCS string
    string LCS = "";
    int k = la-1;
    for(int i = lb-1; i > 0; i--){
        for(int j = k; j > 0; j--){
            if (arr[i][j] == ans && arr[i][j-1] == ans-1 && arr[i-1][j-1] == ans-1 && arr[i - 1][j] == ans-1){
                ans--;
                LCS = b[i] + LCS;
                k = j;
                break;
            }
        }
    }
    cout << LCS << endl;
    */
   
    return 0;
}