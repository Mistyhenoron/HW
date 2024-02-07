#include <bits/stdc++.h>

using namespace std;

const int N = 9999;
int n;
vector <vector <int>> a(n);
vector <int> ans(n);

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 1) {
                ans.push_back(a[i][j]);
                break;
            }
            if (a[i][n-1] == 1) {
                ans.push_back(1);
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
    }
    return 0;
}
