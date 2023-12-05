#include <bits/stdc++.h>

using namespace std;

long long chet, nechet;
string s;

int main() {
    cin >> s;
    int g = s.size();
    for (int i = 0; i < g; i++) {
        if (i%2 == 0) {
            chet += (s[i] - '0');
        }
        else if (i%2 != 0) {
            nechet += (s[i] - '0');;
        }
    }
    if (abs(chet - nechet)%11 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
