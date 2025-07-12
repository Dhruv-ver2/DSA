//To check if an array is a palindrome
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
using namespace std;

int pcheck(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j])    return 0; // Not a palindrome
        
        i++;
        j--;
    }
    return 1; // Is a palindrome
}

int main(){
    int n=5;
    int arr[n]={1,2,3,2,1};
    
    if(pcheck(arr,n)){
        cout<<"The array is a palindrome"<<endl;
    } else {
        cout<<"The array is not a palindrome"<<endl;
    }

    return 0;
}