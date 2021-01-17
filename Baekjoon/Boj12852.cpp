#include<bits/stdc++.h>
using namespace std;

int n, d[1000001];

void ans(int x){
	if(x == 0) return;
	printf("%d ", x);
	if(x%3 == 0 && d[x]== d[x/3]+1) ans(x/3);
	else if(x%2 == 0 && d[x] == d[x/2]+1) ans(x/2);
	else if(x-1 >= 0) ans(x-1);
	return;
}

int main(){
	scanf("%d", &n);
	for (int i = 2; i <= n; i++){
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0 && d[i] > d[i / 2] + 1) d[i] = d[i / 2] + 1;
		if (i % 3 == 0 && d[i] > d[i / 3] + 1) d[i] = d[i / 3] + 1;
	}
	printf("%d\n", d[n]);
	ans(n);
	return 0;
}
