//To reverse an array in C++ using two pointer technique
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
using namespace std;

void reverse(int array[],int s){
    for(int i=0;i<s/2;i++){
        swap(array[i],array[s-1-i]);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    
    
    //Checking the reversed array
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}