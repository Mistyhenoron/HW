#include <iostream>

using namespace std;

int main() {
    int n, d = 0, s = 0;
    cin >> n;
    while(s < n){
        d++;
        s += d;
    }
    cout << d;
    return 0;
}



