//Brute force approach to find a pair in an array that sums to a given target value
// Time complexity: O(n^2)

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(int arr[],int n,int t){
    vector<int> ans;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){

            if((arr[i]+arr[j])==t){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }

    return ans;
}

int main(){
    int n=4;
    int arr[n]={2,7,11,5};
    int t=13;

    vector<int> ans=pairsum(arr,n,t);
    if(ans.size() == 0){
        cout<<"No pair found"<<endl;
    } else {
        cout<<"The pair is: "<<ans[0]<<" and "<<ans[1]<<endl;
    }

    return 0;


}