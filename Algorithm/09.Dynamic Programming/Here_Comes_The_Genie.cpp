#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    long long total = 0;
    long long prev = a[0];

    total += prev;

    for (int i = 1; i < n; ++i) {
        prev = (a[i] < prev - 1) ? a[i] : (prev - 1);  // min-এর পরিবর্তে শর্ত ব্যবহার করা
        if (prev < 0) {
            prev = 0;
        }
        total += prev;
    }

    cout << total << endl;

    return 0;
}