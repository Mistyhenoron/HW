#include <bits/stdc++.h>

using namespace std;

const long long N = 1000004;
long long n, cnt;
vector <long long> a;
bool b[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0 ; i < n; i++) {
        if (a[i] != a[i+1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
----------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

const long long N = 1000004;
long long n, a[N], cnt;
bool b[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]] = 1;
    }
    for (int i = 0;  i < n; i++) {
        if (b[i] == 1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
