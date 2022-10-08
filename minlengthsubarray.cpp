#include <bits/stdc++.h>
using namespace std;
 
// This function is for finding the minimum
// length maximum OR subarray, for each index
vector<int> solve(int arr[], int N)
{
    vector<int> len;
 
    for (int i = 0; i < N; i++) {
        int mxor = 0, mnlen = 0, OR = 0;
        for (int j = i; j < N; j++) {
            OR = OR | arr[j];
 
            // Updating maximum value found
            // so far
            if (mxor < OR) {
                mxor = OR;
                mnlen = j - i + 1;
            }
        }
        len.push_back(mnlen);
    }
 
    return len;
}
 
// Driver's code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    vector<int> mnlen = solve(arr, N);
 
    for (int i = 0; i < N; i++)
        cout << mnlen[i] << " ";
    return 0;
}
