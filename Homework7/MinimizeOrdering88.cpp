#include <bits/stdc++.h>

using namespace std;

const int N = 40;
string s;
int cnt[N];

int main() {

    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i]]++;
    }
    for (int c = 'a'; c <= 'z'; c++){
        for (int i = 0; i < cnt[c]; i++) {
            cout << (char)c;
        }
    }
    return 0;
}

