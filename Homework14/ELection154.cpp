#include <bits/stdc++.h>

using namespace std;

int x, y, z;

bool Election(bool x, bool y, bool z) {
    if (x + y + z >= 2) {
        return 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio();
    cin.tie();
    cin >> x >> y >> z;
    cout << Election(x,y,z);

    return 0;
}
