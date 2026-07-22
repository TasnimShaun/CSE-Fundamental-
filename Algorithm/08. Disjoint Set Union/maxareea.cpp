#include <bits/stdc++.h>
using namespace std;

void max_area() {
    int N;
    cin >> N;
    vector<int> Height(N);

    for (int i = 0; i < N; i++) {
        cin >> Height[i];
    }

    int left = 0, right = N - 1;
    int maxWater = 0, bestLeft = 0, bestRight = 0;

    while (left < right) {
        int height = min(Height[left], Height[right]);
        int width = right - left;
        int area = height * width;

        if (area > maxWater) {
            maxWater = area;
            bestLeft = left;
            bestRight = right;
        }

        if (Height[left] < Height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << bestLeft << " " << bestRight << endl;
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        max_area();
    }

    return 0;
}
