#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6 + 4;
ll k, n, a[N], cnt, b[N], minn = 999999, temp;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < minn) {
            minn = a[i];
            temp = i;
        }
    }
    if (n == 1) {
        cout << k;
        return 0;
    }
    while (k >= n) {
        b[cnt]++;
        cnt++;
        k--;
    }
    while (k != 0) {
        b[temp]++;
        a[temp] = 9999999;
        if (k == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] < minn) {
                minn = a[i];
                temp = i;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << "\n";
    }
    return 0;
}
-----------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

int n, k, temp, cnt;
vector <int> a, b;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
   while (true) {
        if (k - n >= n) {
            k-= n;
            cnt++;
        }
        else {
            break;
        }
    }
    k-= n;
    cnt++;
    for (int i = 0; i < n; i++) {
        b[a[i]] += cnt;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
        k--;
        if (k == 0) {
            break;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (b[a[i]] != 0) {
            cout << b[a[i]] << endl;
        }
    }
    return 0;
}
