//To find  the first non repeating element from the given array
//Time  complexity:O(n^2)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {9, 4, 9, 6, 5, 4};
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << -1; // No unique element found
    return 0;
}
