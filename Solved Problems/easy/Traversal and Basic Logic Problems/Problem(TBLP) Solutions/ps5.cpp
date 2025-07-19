//To get the mirror element of an array
// where the mirror element is defined as the middle element
//Time Complexity: O(1)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int mirrorElement(vector<int> &arr) {
    int n = arr.size();
    if (n <= 0) return -1; // Handle empty array case
    
    else if(n%2==0){
        return arr[n/2 - 1]; // Return the middle element for even-sized arrays
    } else {
        return arr[n/2]; // Return the middle element for odd-sized arrays
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int mirror = mirrorElement(arr);
    if (mirror != -1) {
        cout << "Mirror element: " << mirror << endl;
    } else {
        cout << "Array is empty." << endl;
    }

    return 0;
}