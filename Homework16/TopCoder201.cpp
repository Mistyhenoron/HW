#include <bits/stdc++.h>

using namespace std;

int n, m, k;

struct Comp {
    double point;
    string name;
    void print() {
        cout << fixed << setprecision(2) << point << " " <<  name << "\n";
    }
    void input() {
        cin >> point >> name;
    }
    bool operator < (Comp c) {
        return point > c.point;
    }
};

int main() {
    vector <Comp> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            Comp c;
            c.input();
            v.push_back(c);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (auto i : v) {
        i.print();
    }
    return 0;
}
