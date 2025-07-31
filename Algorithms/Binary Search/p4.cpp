#include<iostream>
#include<vector>
using namespace std;

int odd(vector<int> &nums){
    int n=nums.size();
    int st=0,end=n-1;
    
    if(n==1){
        return nums[0];
    }
    else if(nums[st]!=nums[st+1]){
        return nums[st];
    }
    else if(nums[end]!=nums[end-1]){
        return nums[end];
    }

    while(st<=end){
        int mid = st+(end-st)/2;

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        else if(mid%2!=0){
            if(nums[mid]==nums[mid-1])
                st=mid+1;
            else
                end=mid-1;
        }
        else if(mid%2==0){
            if(nums[mid]==nums[mid-1])
                end=mid-1;
            else
                st=mid+1;
        }
    }

    return -1;

}

int main(){

    vector<int> vec={1,1,2,2,3,4,4,5,5};
    cout<<odd(vec);
    return 0;
    
}



















































//________________________________________________________________Without handling edge cases
// int n=vec.size();
//     int st=0,end=n-1;
//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(vec[mid]!=vec[mid-1] && vec[mid]!=vec[mid+1]){
//             return vec[mid];
//         }
//         else if(mid%2!=0)
//             if(vec[mid]==vec[mid-1])
//                 st=mid+1;
//             else
//                 end=mid-1;
//         else if(mid%2==0){
//             if(vec[mid]==vec[mid-1])
//                 end=mid-1;
//             else
//                 st=mid+1;
//         }
//     }