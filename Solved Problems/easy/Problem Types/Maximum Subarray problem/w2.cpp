//Maximum Subarray sum problem via Prefix Sum approach

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int maxSum=INT_MIN;


    for(int st=0;st<n;st++){
        int cs=0;
        for(int end=st;end<n;end++){
            cs+=arr[end];
            maxSum=max(maxSum,cs);
        }
    }

    cout<<"The maximum subarray sum is: "<<maxSum<<endl;
    return 0;
}