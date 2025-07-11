///To find product of array except self
//Optimized approach using prefix and suffix products
// Time Complexity: O(3n) => O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n, 1);
    vector<int> left(n, 1);;
    vector<int> right(n,1);

    for(int i=1;i<n;i++){
        left[i]=left[i-1]*arr[i-1];
    }

    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*arr[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=left[i]*right[i];
    }

    for(int ele:ans){
        cout<<ele<<endl;
    }

    return 0;
}



//To find the product of all element