#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,1,2,1};
    
    for(int i=0;i<=n-1;i++){
        int f=0;
        for(int j=0;j<=n-1;j++){
            
            if(arr[i]==arr[j]){
                f++;
            }

        }

        if(f>(n/2)){
            cout<<arr[i]<<" is the majority element"<<endl;
            return 0;
        }
    }

    cout<<"No majority element found"<<endl;
    return 0;
}