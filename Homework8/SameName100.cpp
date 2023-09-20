#include <bits/stdc++.h>

using namespace std;

const int N = 1004;

int n;

string s[N], t[N];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
       }
    
       for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j] && t[i] == t[j]) {
                cout << "Yes";
                return 0;
                }
            }
       }
    cout << "No";
    return 0;
    }
