#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <int> a;
int bs(int x) {
    int l = 0, r = n - 1;
   while (l + 1 < r) {
        int mid = (r + l) / 2;
        if (a[mid] > x)
            r = mid;
        else
            l = mid;
    }
    return r;
}
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int g;
        cin >> g;
        a.push_back(g);
    }
    while (k--) {
        int temp;
        cin >> temp;
        int f;
        f = bs(temp);
        if (f == temp) {
            cout << temp;
            return 0;
        }
        else {
           int x1 = lower_bound(a.begin(), a.end(), temp) - a.begin();
           int x2 = upper_bound(a.begin(), a.end(), temp) - a.begin();
            if (abs(a[x1] - temp) < abs(a[x2] - temp)) {
                cout << a[x1];
            }
            else {
                cout << a[x2];
            }
        }
    }
    return 0;
}
