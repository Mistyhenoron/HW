#include <bits/stdc++.h>

using namespace std;

int main(){
int n,k;
cin >> n >> k;
string s;
for (int i = 0; i<n; i++){
    cin >> s[i];
}
for (int i = 0; i<n; i++){
        if (k!=0 && s[i]=='o'){
            cout << 'o';
            k--;
        }
        else {
            cout << 'x';
        }

}
    return 0;
}
