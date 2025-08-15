#include<iostream>
#include<string>
using namespace std;

bool isalnum(char c){
    if(c>='0' && c<='9' || (tolower(c)>='a' && tolower(c)<='z'))    return true;
    return false;
}

bool isPalindrome(string str){
    
    int st=0,end=str.length()-1;

    while(st<end){
        if(!isalnum(str[st])){
            st++;
            continue;
        }
        else if(!isalnum(str[end])){
            end--;
            continue;
        }

        if(tolower(str[st])!=tolower(str[end])) return false;

        st++,end--;
    }


    return true;
}

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    if(!isPalindrome(str)) cout<<"The entered string is not palindrome";
    else cout<<"The entered string is palindrome";

    return 0;
}