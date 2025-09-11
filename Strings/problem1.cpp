// Finding length of a string..
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Welcome";
    string::iterator it;
    int length = 0;
    for(it=s.begin();it!=s.end();it++){
        length ++;
    }cout<<"The length of string is "<<length<<endl;
    return 0;
}