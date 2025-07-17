//To sort an array containing 0s, 1s, and 2s
//This is a variation of the Dutch National Flag problem
//Time Complexity: O(n)
//Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2,0,0,0,1, 2, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    int i = 0;
    while (count0--) arr[i++] = 0;
    while (count1--) arr[i++] = 1;
    while (count2--) arr[i++] = 2;

    for (int ele : arr) cout << ele << "\n";

    return 0;
}
