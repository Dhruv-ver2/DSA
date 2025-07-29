//Maximum subarray sum problem via (Kadane's Algorithm)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int maxSum=INT_MIN;
    int cs=0;

    for(int i=0;i<=n-1;i++){
        cs+=arr[i];
        maxSum=max(maxSum,cs);

        if(cs<0){
            cs=0;
        }
    }

    cout<<"The maximum subarray sum is: "<<maxSum<<endl;

    return 0;
}