#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, a;
    cin >> n;
    a = n/16;
    y = n/16;
    if (y == 10){
        cout << "A";
    }
    else if (y == 11){
        cout << "B";
    }
    else if (y == 12){
        cout << "C";
    }
    else if (y == 13) {
        cout << "D";
    }
    else if (y == 14) {
        cout << "E";
    }
    else if (y == 15) {
        cout << "F";
    }
    else {
        cout << y;
    }
    
    
    x = n - a*16;
    if (x == 10){
        cout <<  "A";
    }
    else if (x == 11){
        cout <<  "B";
    }
    else if (x == 12){
        cout << "C";
    }
    else if (x == 13) {
        cout << "D";
    }
    else if (x == 14) {
        cout << "E";
    }
    else if (x == 15) {
        cout << "F";
    }
    else {
        cout << x;
    }
    return 0;
    }
