#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int n, len, dp[102];
pii line[102];

bool cmp(pii a, pii b) {
	return a.first < b.first;
}

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d %d", &line[i].first, &line[i].second);
	sort(line, line + n + 1, cmp);
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i; j++){
			if (line[i].second > line[j].second){
				if (dp[j] >= dp[i]) dp[i] = dp[j] + 1;
			}
		}
		len = max(len, dp[i]);
	}
	printf("%d", n-len);
}