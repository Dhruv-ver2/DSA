#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,sbstr;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<"Enter a substring: ";
    getline(cin,sbstr);

    int lstr= str.length();
    int lsbstr = sbstr.length();

    while(str.find(sbstr) != string::npos) {
        int pos = str.find(sbstr);
        str.erase(pos, lsbstr);
    }

    cout<<"Modified string: "<<str<<endl;
 

return 0;

}

