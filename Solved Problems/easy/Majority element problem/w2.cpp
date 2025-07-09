#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,1,2,2,2,3,3,3,3,3};

    for(int i=0;i<=n-1;i++){
         if(arr[i]==initital){
            f++;
            
            if(f>(n/2)){
                cout<<arr[i]<<" is the majority element"<<endl;
                return 0;
            }
         }

         else{
            f=1;
            initital=arr[i];
         }
    }

    cout<<"No majority element found"<<endl;
    return 0;
}