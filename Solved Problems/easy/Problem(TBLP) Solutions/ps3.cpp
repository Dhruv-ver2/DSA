//To rotate an array to the left by one position
//Time Complexity: O(n)
//Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int lrotate1(vector<int> &arr){
    if (arr.empty()) return -1; // Handle empty array case
    
    int first = arr[0];
    for (int i = 1; i < arr.size(); i++){
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = first;

    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int first = arr[0];

    lrotate1(arr);

    for (int ele : arr)
        cout << ele << " ";

    cout << endl;
    return 0;
}


