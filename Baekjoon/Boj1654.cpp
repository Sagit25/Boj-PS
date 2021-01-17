#include <bits/stdc++.h>
using namespace std;
 
int k, n, lan[10000];
 
bool chk(int mid){
    int cnt = 0;
    for (int i = 0; i < k; ++i) cnt += lan[i] / mid;
    return cnt >= n;
}
 
int main() {
    scanf("%d %d", &k, &n);
    int max = 0;
    for (int i = 0; i < k; ++i) {
        scanf("%d", &lan[i]);
        if (max < lan[i]) max = lan[i];
    }
    long long left = 1, right = max;
    int ans = 0;
    while (left <= right) {
        long long mid = (left + right) / 2;
        if (chk(mid)) {
            if (mid > ans) ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    printf("%d", ans);
    return 0;
}
