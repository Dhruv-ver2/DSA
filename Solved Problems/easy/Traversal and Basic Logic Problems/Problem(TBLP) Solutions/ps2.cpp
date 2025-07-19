#include<iostream>
#include<climits>
using namespace std;

pair<int ,int> min_max(int arr[],int n){
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<=n-1;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    return {min,max};

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    pair<int ,int> r=min_max(arr, n);
    cout << "Minimum: " <<r.first << ", Maximum: " << r.second<< endl;
    return 0;
}