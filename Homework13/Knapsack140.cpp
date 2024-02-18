#include <bits/stdc++.h>
 
 using namespace std;
 
 int n, W, w1, p1, sumpol = 0, ans, ans2;
 vector <int> weight, price;
 
 void upknapsack(int i, int weightlocal, int pricelocal) {
     if (i == n) {
        sumpol = max(sumpol, pricelocal);
        ans = i;
        return;
     }
     upknapsack(i + 1, weightlocal, pricelocal);
     if (weightlocal + weight[i] <= W) {
         upknapsack(i + 1,  weightlocal + weight[i], pricelocal + price[i]);
     }
 }
 
 int main() {
    cin >> n >> W;
    int temp = n;
    while (temp--) {
        cin >> w1 >> p1;
        weight.push_back(w1);
        price.push_back(p1);
    }
    upknapsack(0, 0, 0);
    cout << sumpol;
    cout << " " << ans;
     return 0;
 }
// ----------------------------------------------------------------------------------------------------------------------------



 #include <bits/stdc++.h>
 
 using namespace std;
 
 int n, W, w1, p1, sumpol = 0, ans;
 vector <int> weight, price, cnt, ans2;
 
 void upknapsack(int i, int weightlocal, int pricelocal) {
     if (i == n) {
        sumpol = max(sumpol, pricelocal);
        ans2 = cnt;
        cnt.erase(cnt.begin() + 25);
        return;
     }
     upknapsack(i + 1, weightlocal, pricelocal);
     if (weightlocal + weight[i] <= W) {
         cnt.push_back(i);
         upknapsack(i + 1,  weightlocal + weight[i], pricelocal + price[i]);
         cnt.pop_back();
     }
 }
 
 int main() {
    cin >> n >> W;
    int temp = n;
    while (temp--) {
        cin >> w1 >> p1;
        weight.push_back(w1);
        price.push_back(p1);
    }
    upknapsack(0, 0, 0);
    cout << sumpol << endl;
    for (int i = 0; i < ans2.size(); i++) {
        cout << ans2[i] << " ";
    }
     return 0;
 }
// Почему он перестал работать (((
