#include<iostream>
#include<algorithm>
using namespace std;



int main(){

    int arr[]={4,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    for(int ele:arr){
        cout<<ele<<endl;
    }
    
}