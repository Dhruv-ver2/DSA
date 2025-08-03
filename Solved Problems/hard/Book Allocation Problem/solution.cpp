#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr, int mid, int nos){
    int stu=1,page=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > mid) return false; // If a single book has more pages than mid, it's not valid
        if(page + arr[i]<=mid)  page += arr[i];
        
        else{ 
            stu++;
            page=arr[i];
        }
    }

    return stu<=nos ? true: false;   //stu <= nos; Return true if the number of students is within the limit
}

int bookallocation(vector<int> &arr,int nob,int nos){
    int sum=0;
    int lbook=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        lbook=max(lbook, arr[i]); // Find the book with the maximum pages
    }

    int start=lbook, end=sum;
    int ans=0;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(isvalid(arr, mid, nos)){
            ans=mid; // If valid, store the answer
            end=mid-1; // Try for a smaller maximum
        }
        else{
            start=mid+1; // If not valid, increase the minimum limit
        }
    }

    return ans; // Return the best found answer
}

int main(){
    vector<int> arr={2,1,3,4,5};
    int nos=2; // Number of students
    int nob=arr.size(); // Number of books  

    cout << bookallocation(arr, nob, nos) << endl; // Output the result
    return 0;
}