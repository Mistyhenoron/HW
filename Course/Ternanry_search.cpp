#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-6;

double a = 3.5, b = -17.81, c = 91.45;
double f(double x) {
    return a*x*x + b*x + c; // просто случайный пример функции
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double l = -1000, r = 1000; // ограничения нужно прикинуть самому взглянув на задачу
    while (r-l > eps) {
        double m1 = l + (r-l)/3; // можно заменить на (2*l + r)/3. По сути это (r-l)/3 это просто добавление трети сначала к l (началу) а потом и к этой части уже добавляем еще треть
        double m2 = m1 + (r-l)/3; // на (l + 2*r)/3;
        if (f(m1) < f(m2)) {
            r = m2;
        } else {
            l = m1;
        }
    }
    cout << fixed << setprecision(30) << l << endl;
    cout << -b/(2*a);
} // это поиск минимума параболы. Если обратить внимание на ответ и сравнить его с предпологаемым то мы поймем что как раз нашили 6 знаков после запятой (eps)
