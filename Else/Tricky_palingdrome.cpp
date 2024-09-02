bool checkpal(ll num) {
    string st = to_string(num);
    string ts = string(st.rbegin(), st.rend());
    return st == ts;
}
