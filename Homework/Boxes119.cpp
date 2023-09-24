#include <bits/stdc++.h>

using namespace std;

int a1, b1, c1, a2, b2, c2;
vector <int> a, b;
int main() {
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

        if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
        cout << "Boxes are equal";
        return 0;
    }
    else if (a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) {
        cout << "The first box is larger than the second one";
        return 0;
    }
    else if (a[0] <= b[0] && a[1] <= b[1] && a[2] <= b[2]) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }

    return 0;
}
