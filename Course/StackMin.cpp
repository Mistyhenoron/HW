#include <bits/stdc++.h>

using namespace std;

int n;

string s;

struct StackMin {
    stack<pair<int, int>> s;
    void push(int x){
        s.push({x, min(x, minn()) });
    }
    bool empty() {
        return s.empty();
    }
    int minn() {
        if (empty()) {
            return -1;
        }
        return s.top().second;
    }
    void pop() {
        s.pop();
    }
};

int main() {
    cin >> n;
    StackMin a;
    while (n--) { 
        cin >> s;
        if (s == "push") {
            int temp;
            cin >> temp;
            a.push(temp);
            continue;
        }
        else if (s == "pop") {
            a.pop();
            continue;
        }
        else if (s == "min") {
            cout << a.minn() << endl;
            continue;
        }
    }
    return 0;
}
// не работает поччч
