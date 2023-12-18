#include <bits/stdc++.h>

using namespace std;

string s;
char maxx;

bool check1(char temp) {
    return (temp >= '0'&& temp <= '9');
}
bool check2(char temp) {
    return (temp >= 'A' && temp <= 'Z');
}

int main() {
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (check1(s[i]) || check2(s[i])) {
            if (s[i] > maxx) {
                maxx = s[i];
            }
        }
        else {
            cout << -1;
            return 0;
        }
    }
    if (check1(maxx)) {
        int temp = maxx -'0';
        if (temp <= 2) {
            cout << 2;
            return 0;
        }
        else {
            cout << temp + 1;
        }
    }
    else if (check2(maxx)) {
        cout << maxx - 'A' + 11;
    }
    return 0;
}
