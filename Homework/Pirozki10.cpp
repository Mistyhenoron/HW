#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,n;
    cin >> a >> b >> n;
    cout << (((a * 100) + b)*n)/100<< " " << (((a * 100) + b)*n)%100;
    return 0;
}

