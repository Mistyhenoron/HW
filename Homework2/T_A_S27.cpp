#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A1,A2,A3;
    cin >> A1 >> A2 >> A3;
    if(A1-A2==A2-A3|| A2-A1==A1-A3|| A3-A2== A2-A1|| A3-A1==A1-A2|| A2-A3==A3-A1||A1-A3==A3-A2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
