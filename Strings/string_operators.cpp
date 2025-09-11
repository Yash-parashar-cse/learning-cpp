#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Holiday";
    // cout<<str.at(4)<<endl;
    // cout<<str.front()<<endl;
    // cout<<str.back()<<endl;
    // str[4] = 'M';
    // cout<<str<<endl;

    string s1 = "Hello";
    string s2 = " world";
    string s4 = "compare";
    string s5 = "";

    string s3 = s1 + s2;
    cout<<s3<<endl;
    s1 = s1 + " Yash parashar";
    cout<<s1<<endl;

    s5 = s4;
    cout<<s5<<endl;
    return 0;
}