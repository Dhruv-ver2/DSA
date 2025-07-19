//To rotate an array to the left by k positions
// where k is the number of positions to rotate
//Time Complexity: O(n)
//space Complexity: O(k)

#include<iostream>
#include<vector>
using namespace std;

void lrotatek(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> temp;

    for(int i=0;i<k;i++){
        temp.push_back(arr[i]); 
    }

    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }

    for(int i=n-1,j=0;i>=n-k;i--,j++){
        arr[i] = temp[j];
    }
}

int main(){
    
    vector<int> arr={1, 2, 3, 4, 5, 6};
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;

    lrotatek(arr,k);

    //Checking rotated array
    for(int ele:arr){
        cout << ele << " ";
    }




    return 0;
}

