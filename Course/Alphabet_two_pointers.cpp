#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-12;
int n, k;
vi x;
string s;

int main() {
    cin >> s;
    int n = s.size(); 
    int maxl = n, optl = -1, optr = -1;
    int f = 0;
    int alph = 4;
    vi cnt (alph);
    int zeroes = alph;
    for (int i = 0; i < n; i++) {
        while (f < n && zeroes > 0) {
            cnt[s[f] - 'a']++;
            if ((cnt[s[f] - 'a']) == 1) {
                zeroes--;
            }
            f++;
        }
        if (zeroes == 0) {
            if (f - i < maxl) {
                optl = i;
                optr = f - 1;
                maxl = f - i;
            }
        }
        cnt[s[i] - 'a']--;
        if (cnt[s[i] - 'a'] == 0) {
            zeroes++;
        }
    }
    cout << optl + 1 << " " << optr + 1;  
    return 0;
}
