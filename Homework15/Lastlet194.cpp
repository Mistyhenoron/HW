#include <bits/stdc++.h>

using namespace std;

long long a,b;

int main() {
    cin >> a >> b;
    int temp = a%10;
    for (int i = 1; i < b; i++) {
        a*= temp;
        a%= 10;
    }
    cout << a%10;
    return 0;
}
