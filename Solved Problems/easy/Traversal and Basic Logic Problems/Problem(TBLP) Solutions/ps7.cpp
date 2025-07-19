//To find the maximum difference between two elements in an array such that the larger element appears after the smaller one.
// This code assumes that the input array has at least two elements.
// Time Complexity: O(n)
//Space Complexity: O(1)
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minValue = arr[0];
    int maxDiff = INT_MIN;

    for (int j = 1; j < n; j++) {
        int currDiff = arr[j] - minValue;
        maxDiff = max(maxDiff, currDiff);
        minValue = min(minValue, arr[j]);
    }

    cout << maxDiff << "\n";
    return 0;
}


