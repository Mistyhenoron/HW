#include <bits/stdc++.h>

using namespace std;

int n, a[444][444];
double maxx = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if (sqrt((abs(a[i][j] - a[i+1][j]))*abs((a[i][j] - a[i+1][j])) + (abs(a[i][j+1] - a[i+1][j+1]))*(abs(a[i][j+1] - a[i+1][j+1]))) > maxx){
               maxx = sqrt((abs(a[i][j] - a[i+1][j]))*abs((a[i][j] - a[i+1][j])) + (abs(a[i][j+1] - a[i+1][j+1]))*(abs(a[i][j+1] - a[i+1][j+1])));
            }
        }
    }
    cout << fixed << setprecision(15) << maxx;
    return 0;
}
