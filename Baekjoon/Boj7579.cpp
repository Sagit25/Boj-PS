#include <bits/stdc++.h>
using namespace std;

int n, m, a[101], c[101], dp[10001];

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++) scanf("%d", &c[i]);
    for(int i = 1; i <= n; i++){
	    for(int j = 10000; j >= 0; j--){
			if(j < c[i]) break;
			dp[j] = max(dp[j], dp[j - c[i]] + a[i]);
		}
    }
	for(int i = 0; i <= 10000; i++){
		if(dp[i] >= m){
			printf("%d", i);
			break;
		}
    }
	return 0;
}