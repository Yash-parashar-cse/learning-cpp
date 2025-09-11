// CHECK WHETHER A STRING IS PALINDROME OR NOT..
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "MAdAM";
    string rev = "";
    int length = (int)str.length();
    rev.resize(length);

    for(int i=0,j=length-1;i<length;i++,j--){
        rev[i] = str[j];
    }
    if(str.compare(rev) == 0){
        cout<<"String is palindrome";
    }else{
        cout<<"String is not palindrome";
    }
    return 0;
}