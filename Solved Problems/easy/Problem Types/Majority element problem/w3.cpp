#include<iostream>
using namespace std;


int main(){
    int n = 10;
    int arr[n] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3};
    int ans = -1;
    int f = 0;

    for(int i = 0; i < n; i++) {
        if(f == 0) {
            ans = arr[i];
            f = 1;
        } else {
            if(arr[i] == ans)
                f++;
            else
                f--;
        }
    }

    // Optional: verify if candidate is really majority
    for(int i = 0; i < n; i++) {
        if(arr[i] == ans)
            f++;
    }

    if(f > n / 2)
        cout<< ans << " is the majority element" << endl;
    else
        cout<<"No majority element found" << endl;

    return 0;
}
