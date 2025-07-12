//To calculate the prefix sum of a vector using a nested loop
//Time Complexity: O(n^2)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();


    for (int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += arr[j];
        }
        arr[i] = sum;
}

}