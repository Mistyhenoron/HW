#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[50][50];
string s;
int check[50];
vector <char> ans;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    while (m--) {
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            check[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (check[a[i][j] - 'A'] != 0) {
                check[a[i][j] - 'A']--;
                a[i][j] = 'a';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 'a') {
                ans.push_back(a[i][j]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    return 0;
}
