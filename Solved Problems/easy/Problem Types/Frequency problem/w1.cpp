#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1, 2, 2, 4, 3, 1};

    for(int i=0; i<n; i++){
        bool found = false;
        
        for(int j=0;j<i;j++)
            if(arr[j]==arr[i]){
                found = true;
                break;
            }

            if(!found){
                int f = 0;
                for(int j=0; j<n; j++){
                    if(arr[j]==arr[i]){
                        f++;
                    }
                }

                cout << "Element: " << arr[i] << ", Frequency: " << f << endl;
            }

    }

    return  0;
}