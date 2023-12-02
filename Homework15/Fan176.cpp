#include <bits/stdc++.h>

using namespace std;

int troom, tned;
string mode;

int main() {
    cin >> troom >> tned >> mode;
    if (mode == "fan") {
        cout << troom;
        return 0;
    }
    else {
        if (mode == "auto") {
            cout << tned;
        }
        else if (mode == "heat") {
            if (troom <= tned) {
                cout << tned;
            }
            else {
                cout << troom;
            }
        }
        else if (mode == "freeze") {
            if (troom >= tned) {
                cout << tned;
            }
            else {
                cout << troom;
            }
        }
    }
    return 0;
}
