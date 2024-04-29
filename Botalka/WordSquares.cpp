#include <bits/stdc++.h>

using namespace std;

int n;
string ss[100];
vector <string> firstout, secondout, firsans, secans;

bool check(vector<string> firstout, vector<string> secondout) {
    // hz kak poka chto 
}

void bt(int cnt) {
    if (cnt == 2*n) {
        if (check(firstout, secondout)) {
            firsans = firstout;
            secans = secondout;
        }
        return;
    }
    firstout.push_back(ss[cnt]);
    firstout.pop_back();
    secondout.push_back(ss[cnt]);
    secondout.pop_back();
    
}

int main() {
    cin >> n;
    for (int i = 0; i < 2*n; i++) {
        int s;
        cin >> s;
        ss[i] = s;
    }
    bt(...);
    for (int i = 0; i < firsans.size(); i++) {
        cout << firsans[i] << endl;
    }
    for (int i = 0; i < secans.size(); i++) {
        cout << secans[i] << endl;
    }
    return 0;
}
