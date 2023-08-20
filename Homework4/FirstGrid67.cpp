#include <bits/stdc++.h>

using namespace std;

string s1, s2,s3;

int main() {
    cin >> s1 >> s2;
    s3 = s1+s2;
    if (s3 == ".##." || s3 == "#..#"){
        cout << "No";
    } else {
    cout << "Yes";
    }
    return 0;
}
