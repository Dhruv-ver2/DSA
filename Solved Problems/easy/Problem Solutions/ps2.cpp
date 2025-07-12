//To rotate an array to the left by d positions
// where d is the number of positions to rotate
//Time Complexity: O(n)
//space Complexity: O(d)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1, 2, 3, 4, 5, 6};
    vector<int> temp;
    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;


    for(int i=0;i<=d-1;i++){
        temp.push_back(arr[i]); 
    }

    for(int i=d;i<=n-1;i++){
        arr[i-d] = arr[i];
    }

    for(int i=n-1,j=0;i>=n-d;i--,j++){
        arr[i] = temp[j];
    }


    return 0;
}