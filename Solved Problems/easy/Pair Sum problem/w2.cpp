//To find a pair in an array that sums to a given target value using two pointers technique
// Time complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(int arr[],int n,int t){
    vector<int> ans;
    int i=0,j=n-1;
    
    while(i<j){
        int ps=arr[i] + arr[j];

        if(ps>t){
            j--;
        } else if(ps<t){
            i++;
        } else {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans; // Return immediately after finding the first pair
        }
    }

    return ans; // Return empty vector if no pair is found

}         

int main(){
    int n=4;
    int arr[n]={2,5,7,11};
    int t=18;

    vector<int> ans=pairsum(arr,n,t);
    if(ans.size() == 0){
        cout<<"No pair found"<<endl;
    } else {
        cout<<"The pair is: "<<ans[0]<<" and "<<ans[1]<<endl;
    }

    return 0;


}