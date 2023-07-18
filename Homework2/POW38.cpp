#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (pow(a,c)<pow(b,c)) {
        cout << " < ";
    }
    else if (pow(a,c) > pow(b,c)) {
        cout << ">";
    }
    else if (pow(a,c)==pow(b,c)) {
        cout << "=";
    }

    return 0;
}
