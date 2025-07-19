#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={10, 5, 3, 4, 3, 5, 6};
    int n=arr.size();

    int f=1,ini=arr[0];

    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                return 0;
            }
        }
    }
    
    cout<<"No repeating element";
    return 0;
}