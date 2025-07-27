#include<iostream>
#include<vector>
using namespace std;


int peakindex(vector<int> vec){
    int n=vec.size();
    int st=1,end=n-2;

    while(st<=end){
        int mid=st+(end -st)/2;

        if(vec[mid]>vec[mid-1] && vec[mid]>vec[mid+1]) return mid;
        
        else if(vec[mid]>vec[mid-1]) st=mid+1;

        else end=mid-1;
    }

    return -1;
}

int main(){
    vector<int> vec={0,3,8,9,5,2};

    cout<<"The peak element is "<<vec[peakindex(vec)];
    return 0;
}