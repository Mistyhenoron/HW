#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, lp=-1, rp=-1, star;
    string a;
    cin >> n >> a;
    for (int i = 0; i < n; i++){
        if (a[i] == '|'){
            if (lp == -1){
                lp = i;
            }
            else {
                rp = i;
            }
        }
        else if (a[i] == '*'){
            star = i;
        }
    }
    if (lp<star && star < rp){
        cout << "in";
    }
    else {
        cout << "out";}
    return 0;
}
