//To calculate the prefix sum of a vector
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1, 2, 3, 4, 5};
    int n=vec.size();

    for(int i=1;i<=n-1;i++){
        vec[i] += vec[i-1];
    }

    return 0;
}


























//__________________________________Hidden Problem____________________________________

//To count the frequency of elements in an array
//Time Complexity: O(n log n) due to sorting
//Space Complexity: O(1) if we ignore the input array storage

// #include <iostream>
// #include <algorithm>   // std::sort
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 4, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Step 1: Sort
//     sort(arr, arr + n);

//     // Step 2: Count frequencies
//     int count = 1;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] == arr[i - 1]) {
//             count++;
//         } else {
//             cout << arr[i - 1] << " occurs " << count << " times" << endl;
//             count = 1; // reset for new element
//         }
//     }

//     // Print the last element's frequency
//     cout << arr[n - 1] << " occurs " << count << " times" << endl;

//     // Step 3: Print the sorted array (optional)
//     cout << "\nSorted array: ";
//     for (int ele : arr) {
//         cout << ele << " ";
//     }

//     return 0;
// }
//__________________________________Hidden Problem____________________________________