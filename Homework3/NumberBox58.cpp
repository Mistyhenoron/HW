#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> ans;
    
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
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    return 0;
}
// загадка ноиер 1 почему это не работает
