#include <bits/stdc++.h>
 
using namespace std;
 
int n, ans, summ;
vector <int> a;
 
int sum(int f) {
    int ans = 0;
    while (f != 0) {
        ans +=f%10;
        f/= 10;
    }
    return ans;
}
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && sum(i) > summ) {
            summ = sum(i);
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
