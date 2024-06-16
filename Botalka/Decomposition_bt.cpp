#include <bits/stdc++.h>

using namespace std;

int n, light = 0;

void bt(int cnt, int number, int current_i) {
  if (light == 1) {
     if (number == 0) {
       cout << current_i;
    }else {
      cout << current_i << "+";
    }  
  }
  light = 1;
  if (number == 0) {
    cout << endl;
    return;
  }
  for (int i = n-1; i >= 1; i--) {
    if (number - i >= 0 && i <= current_i) {
      bt(cnt + 1, number - i, current_i = i);
    }
  }
}

int main() {
cin >> n;
bt(0, n, n-1);
return 0;
} // Почему-то к сожалению эта версия не работает
--------------------------------------------------------------------------------------------------
  #include <bits/stdc++.h>

using namespace std;

int n;

void bt(int number, int current_i, string prefix) {
    if (number == 0 && prefix != to_string(n)) {
        cout << prefix << endl;
        return;
    }
    for (int i = current_i; i >= 1; i--) {
        if (number - i >= 0 && i <= current_i) {
            if (prefix.empty()) {
                bt(number - i, i, to_string(i));
            } else {
                bt(number - i, i, prefix + "+" + to_string(i));
            }
        }
    }
}

int main() {
    cin >> n;
    bt(n, n, "");
    return 0;
}
