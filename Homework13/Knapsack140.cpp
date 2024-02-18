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
// Я хз как это дописать но очень рад что хотябы понял основной смысл
