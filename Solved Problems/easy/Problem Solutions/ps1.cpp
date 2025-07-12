//To rotate an array to the left by one position
//Time Complexity: O(n)
//Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int first = arr[0];

    for (int i = 1; i < arr.size(); i++)
        arr[i - 1] = arr[i];

    arr[arr.size() - 1] = first;

    for (int ele : arr)
        cout << ele << " ";
}
