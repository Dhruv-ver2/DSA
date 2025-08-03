#include<iostream>
#include<vector>
using namespace std;

int targetindex(vector<int> &nums,int target){
    int n=nums.size();
    int st=0,end=n-1;

    while(st<=end){
        int mid=start+(end-start)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) st=mid+1;
        else end=mid-1;
    }

    return -1;
}

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    int t;
    cout<<"Enter the target element:";
    cin>>t;

    if(targetindex(vec,t)!=-1){
        cout<<"The target element is at index: "<<targetindex(vec,t);
    }
    else{
        cout<<"The target element is not present in the array.";
    }

    return 0;

}