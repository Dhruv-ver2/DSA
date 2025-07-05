//Maximum subarray sum problem via Brute Force approach


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int maxSum=INT_MIN;


    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int cs=0; // current sum
            for(int i=st;i<=end;i++){
                cs+=arr[i];
            }
            maxSum=max(maxSum,cs);
        }
    }

    cout<<"The maximum subarray sum is: "<<maxSum<<endl;
    return 0;
}