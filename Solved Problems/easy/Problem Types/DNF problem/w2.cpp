// DNF problem (Dutch National Flag problem)
// To sort an array containing 0s, 1s, and 2s in
// a single pass using three pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <algorithm>   // std::swap
using namespace std;

int main() {
    int arr[] = {2, 0, 1, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int nextZero = 0;        // boundary for 0s
    int curr     = 0;        // current element,
    int nextTwo  = n - 1;    // boundary for 2s

    while (curr <= nextTwo) {

        if (arr[curr] == 0) {              // put 0 to the left
            swap(arr[nextZero], arr[curr]);
            nextZero++;
            curr++;
        }
        else if (arr[curr] == 1) {         // 1 stays in the middle
            curr++;
        }
        else {                             // arr[curr] == 2
            swap(arr[curr], arr[nextTwo]); // put 2 to the right
            nextTwo--;
            // do NOT curr++ here — the new arr[curr] must be checked
        }
    }

    // print result
    for (int x : arr) cout << x << ' ';
    return 0;
}
