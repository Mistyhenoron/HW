#include <bits/stdc++.h>

using namespace std;

int n, temp;

int main(){
   cin >> n;
   int bign;
   for (int i = 1; i <= n; i++) {
       bign += i;
   }
   int izn[1000][1000];
   vector<vector<int>> dp(n, vector<int>(n, -9999999));
   if (n == 1) { // исключаем случай с единицей
       int ans;
       cin >> ans;
       cout << ans;
       return 0;
   }
   cin >> izn[1][1];
   int cnt = 2, cntloop = 0;
   
   for (int i = 2; i <= bign; i++) { // закидываем все числа в массив с обозначением длины строки для дальнейшего использования (с помощью cnt и cntloop в цикле)
        if (cntloop == i) {
            cntloop = 0;
            cnt++;
        }
        cin >> izn[i][cnt];
        cntloop++;
   }
   
   dp[1][1] = izn[1][1];
   dp[2][2] = dp[1][1] + izn[2][2]; // делаем базу, вычисляя ответ для строки длины 2
   dp[3][2] = dp[1][1] + izn[3][2];
   
   if (n == 2) {
       cout << max(dp[2][2], dp[3][2]); // исключаем ответ с 2-кой (на всякий случай)
       return 0;
   }
   cnt = 3, cntloop = 0;
   for (int i = 3; i <= bign; i++) { // вычисляем ответ
       if (cntloop = i) {
           cntloop = 0;
           cnt++;
       }
       if (dp[i - cnt][cnt - 1] != -9999999) {
           dp[i][cnt]+= dp[i - cnt][cnt - 1];
       }
       if (dp[i - cnt - 1][cnt-1] != -9999999) {
           dp[i][cnt] += dp[i - cnt - 1][cnt - 1];
       }
       cntloop++;
   }
   int maxx = -999999;
      for (int i = bign - n; i <= bign; i++) { // находим максимальное значение в последнем ряду
       if (dp[i][n] >= maxx) {
           maxx = dp[i][n];
       }
   }
    cout << maxx;
    return 0;
}

//TRASH
// хз как задебажить :(

---------------------------------------------------------------------------------------------
