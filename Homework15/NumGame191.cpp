#include <bits/stdc++.h>

using namespace std;

const int N = 10004;
int n, p1, p2;
vector <int> a;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    if (a.size() == 1) {
        cout << a[0] << ":" << 0;
        return 0;
    }
    else {
        int g = a.size();
        int nach = 0, kon = n - 1;
        while (g != 0) {
           if (a[nach] >= a[kon]) {
            p1 += a[nach];
            nach++;
            g--;
           }
           else if (a[kon] >= a[nach]) {
                p1 += a[kon];
                kon--;
                g--;
           }
           if (g != 0) {
                  if (a[nach] >= a[kon]) {
            p2+= a[nach];
            nach++;
            g--;
           }
           else if (a[kon] >= a[nach]) {
                p2 += a[kon];
                kon--;
                g--;
             }
           }
        }
    }
    cout << p1 << ":" << p2;
    return 0;
}
