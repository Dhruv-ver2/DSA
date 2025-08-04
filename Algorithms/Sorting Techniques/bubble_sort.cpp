#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n-1; i++){
        bool swapcheck = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swapcheck=true;
                swap(arr[j], arr[j+1]);
            }
        }

        if(!swapcheck) break; // If no swaps were made, the array is sorted
    }

    cout<<"\nAfter sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}

