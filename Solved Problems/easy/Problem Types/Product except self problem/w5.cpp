//To find  the product of given array except self ,using the / operator
// Time Complexity: O(2n) => O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n, 1);
    int total_product = 1;

    for(int i=0; i<n; i++){
        total_product *= arr[i];
    }

    for(int i=0; i<n; i++){
        ans[i] = total_product / arr[i];
    }

    for(int ele:ans){
        cout<<ele<<endl;
    }

    return 0;
}
