// Peak Index of Mountain Array
// Given a mountain array, find the index of the peak element.


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={0,3,8,9,5,2};
    int n=vec.size();
    int ans;

    for(int i=1;i<n-1;i++){
        if(vec[i]>vec[i-1]&& vec[i]>vec[i+1]) ans=i;
    }

    cout<<"The peak element is "<<vec[ans];
    return 0;
}