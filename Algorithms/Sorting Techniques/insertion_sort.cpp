#include<iostream>
using namespace std;

int main(){

    int arr[]={4,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int c=arr[i];
        int p=i-1;

        while(p>=0 && arr[p]>c){
            arr[p+1]=arr[p];
            p=p-1;
        }
        
        arr[p+1]=c;
    }


    for(int ele:arr) cout<<ele<<endl;

    return 0;
}