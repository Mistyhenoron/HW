#include <bits/stdc++.h>

using namespace std;

string s;
int n;

int main() {
    cin >> n;
    for (int i = 1; i < 32769; i++) {
        for (int j = 1; j < i; j++) {
            s.push_back(j+'0');
        }
    }
    cout << s[n-1];
    return 0;
}
