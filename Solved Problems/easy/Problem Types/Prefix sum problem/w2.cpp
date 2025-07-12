//To calculate the prefix sum of a vector
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1, 2, 3, 4, 5};
    int n=vec.size();

    for(int i=1;i<=n-1;i++){
        vec[i] += vec[i-1];
    }

    return 0;
}