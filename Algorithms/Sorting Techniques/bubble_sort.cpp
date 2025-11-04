#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    cout<<"{";
    for(int i=0;i<n;i++){
        
        if(i==n-1){
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<",";
    }

    cout<<"}";
}

int main(){

    int arr[]={4,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    print(arr,n);

    return 0;
    
}