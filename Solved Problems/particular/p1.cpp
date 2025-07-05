//To print the unique value from an non-empty array with other values are duplicate

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={2,3,4,1,1,3,2};
    int value=0;

    for(int ele:vec){
        value=value^ele;
    }

    cout<<"The unique value is "<<value;
    return 0;
}