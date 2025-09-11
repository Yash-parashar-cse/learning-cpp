#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Hello";
    // s.insert(3,"KK");
    s.insert(3,"Apple",2);
    cout<<s<<endl;
    return 0;
}