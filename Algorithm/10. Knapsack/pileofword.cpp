#include <bits/stdc++.h>
using namespace std;

bool isPileOfWord(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        cout << (isPileOfWord(s1, s2) ? "YES" : "NO") << endl;
    }
    return 0;
}
