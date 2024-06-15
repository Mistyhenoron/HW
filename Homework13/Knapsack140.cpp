#include <bits/stdc++.h>

using namespace std;

int n, k, finutility, finquantity, w[10000], p[10000], W;
vector <int> ans, anstemp;

void Knapsack(int cnt, int weight, int utility, int quantity) {
    if (cnt == n || weight > W) {
        finutility = max(finutility, utility);
        finquantity = anstemp.size();
        ans = anstemp;
        return;
    }
    Knapsack(cnt+1, weight, utility, quantity);
    if (weight + w[cnt] < W) {
        anstemp.push_back(cnt+1);
        Knapsack(cnt+1, weight + w[cnt], utility + p[cnt], quantity+1);
        anstemp.pop_back();
    }
}

int main(){
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> p[i];
    }
    Knapsack(0, 0, 0, 0);
    cout << finquantity << " " << finutility << endl;
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}
