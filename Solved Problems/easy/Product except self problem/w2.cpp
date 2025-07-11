//Brute force approach to find product of all elements except self
// Time Complexity: O(n^2)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=4;
    int arr[n]={1,2,3,4};
    vector<int> ans(n, 1);

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i!=j)
                ans[i] *= arr[j];
        }


    }

    for(int ele:ans){
        cout<<ele<<endl;
    }

    return 0;
}