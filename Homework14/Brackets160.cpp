
#include <bits/stdc++.h>

using namespace std;

string s;

void sep() {
    if (s.size()%2 != 0) {
        for (int i = 0; i < (s.size()/2) + 1; i++) {
            cout << '(' << s[i];
        }
        for (int i = (s.size()/2) + 1; i < s.size(); i++) {
            cout << ')' << s[i];
        }
        cout << ")";
    }
    else {
        for (int i = 0; i < (s.size()/2); i++) {
            cout << '(' << s[i];
        }
        for (int i = (s.size()/2); i < s.size(); i++) {
            cout << s[i] << ')';
        }
    }
}

int main() {
    cin >> s;
    sep();
    return 0;
}
