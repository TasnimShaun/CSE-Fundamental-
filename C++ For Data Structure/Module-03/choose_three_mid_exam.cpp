#include<bits/stdc++.h>
using namespace std;
int main () 
{
   int t;
   cin >> t;
   for( int i=1;i<=t; i++)
   {

   int n;
   int s;
    cin >> n >> s ;

    int arr[n];

   for(int i =0;i<n;i++)
   {
   cin >> arr[i]; 
     }  
        sort(arr , arr + n);

        bool found = false; 
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;  
            int right = n - 1;  

            while (left < right) {
             int sum = arr[i] + arr[left] + arr[right];
                if (sum == s) {
                    found = true; 
                    break;
                } else if (sum < s) {
                    left++; 
                } else {
                    right--;
                }
            }
            if (found) {
                break; 
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
   }


    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Sort the array
        sort(A, A + N);

        bool found = false; // Flag to check if a triplet is found

        // Use the two-pointer approach to find the triplet
        for (int i = 0; i < N - 2; i++) {
            int left = i + 1;   // Second element
            int right = N - 1;  // Third element

            while (left < right) {
                int sum = A[i] + A[left] + A[right];

                if (sum == S) {
                    found = true; // Triplet found
                    break;
                } else if (sum < S) {
                    left++; // Increase the sum
                } else {
                    right--; // Decrease the sum
                }
            }

            if (found) {
                break; // Exit the loop early if a triplet is found
            }
        }

        // Output the result for this test case
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}*/


/*
#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool found = false;

        // Check all combinations of three elements
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (A[i] + A[j] + A[k] == S) {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        // Output the result
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}*/