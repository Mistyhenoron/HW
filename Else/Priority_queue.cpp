#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector <int>;
ll n, m;
vi a;
string s;

priority_queue <int, vi, greater<int>> qu; 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "insert") {
            int m;
            cin >> m;
            qu.push(m);
        }
        else if (s == "extractMin") {
            cout << qu.top() << endl;
            qu.pop();
            
        } 
        else if (s == "getMin") {
            cout << qu.top() << endl;
        }
    }
    return 0;
}
