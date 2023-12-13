#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 34;
int n, m, k, test = 1, ans[N];
string s1[N], s2[N];
 
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s1[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> s2[i];
    }
 
    for (int i = 0; i < n; i++) { // РѕСЂРёРі РёРјРµРЅР°
        string osn = s1[i];
        for (int j = 0; j < m; j++) {  //   С„-РёРјРµРЅР°
            string temp = s2[j];
            int cnt1 = 0; // СЃС‡РµС‚С‡РёРє РѕС€РёР±РѕРє РІ С„-РёРјРµРЅРё
            for (int k = 0; k < temp.size(); k++) { // С„ - РёРјСЏ
                if (temp[k] != osn[k]) {
                    cnt1++;
                }
                if (cnt1 > 1) {
                    break;
                }
            }
            if (cnt1 == 1 && osn != temp && osn.size() == temp.size()) {
                ans[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
