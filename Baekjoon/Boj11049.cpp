#include <bits/stdc++.h>
using namespace std;

int n, a[510][2], dp[510][510];

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
	for(int i = 1; i < n; i++) dp[i][i+1] = a[i][0] * a[i][1] * a[i+1][1];
	for(int m = 2; m <= n; m++){ 
		for(int i = 1; i <= n-m; i++){
			int j = i + m;
			for(int k = i; k < j; k++){
				int res = dp[i][k] + dp[k+1][j] + a[i][0] * a[k][1] * a[j][1];
				if(!dp[i][j] || dp[i][j] > res) dp[i][j] = res;
			}
		}
	}
	printf("%d", dp[1][n]);
}