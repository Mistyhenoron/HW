#include <bits/stdc++.h>

using namespace std;

int Diff11() {
    int h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    cout << (h2*60*60 - h1*60*60) + (m2*60-m1*60) + (s2-s1);
    return 0;
}


