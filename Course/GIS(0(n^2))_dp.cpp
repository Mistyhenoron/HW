#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> a(n);
    vector <int> dp(n, 1);
    vector<int> p(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    p[i] = j;
                }
            }
        }
    }
    auto it = max_element(dp.begin(), dp.end());
    cout << *it << endl;
    int pos = it - dp.begin();
    vector<int> ans;
    while (pos != -1) {
        ans.push_back(a[pos]);
        pos = p[pos];
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}
