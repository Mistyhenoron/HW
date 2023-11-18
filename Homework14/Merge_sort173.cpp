#include <bits/stdc++.h>

using namespace std;

using vi = vector <int>;

int n;
vi a;
vi b;

vi merge(vi t1, vi t2) {
    vi res;
    int i = 0, j = 0;
    while (i < t1.size() && j < t2.size()) {
        if (t1[i] <= t2[j]) {
            res.push_back(t1[i]);
            i++;
        }
        else {
            res.push_back(t2[j]);
            j++;
        }
    }
    while (i < t1.size()) {
        res.push_back(t1[i]);
        i++;
    }
    while (j < t2.size()) {
        res.push_back(t2[j]);
        j++;
    }
    return res;
}

vi msort(vi t) {
    if (t.size() <= 1) {
        return t;
    }
    int half = t.size()/2;
    return merge(msort(vi(t.begin(), t.begin()+half)),
                 msort(vi(t.begin()+half, t.end())));
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    b = msort(a);
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
