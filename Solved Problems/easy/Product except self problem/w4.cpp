//To find product of array except self using inbuilt prefex and suffix products
// Time Complexity: O(3n) => O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n, 1);

    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * arr[i-1];
    }

    int right=1;
    for(int i=n-1; i>=0; i--){
        ans[i] *= right;
        right *= arr[i];
    }

    for(int ele:ans){
        cout<<ele<<endl;
    }

    return 0;
}