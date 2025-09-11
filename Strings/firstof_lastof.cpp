#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello World";
    // cout<<str.find_first_of('l')<<endl;
    // cout<<str.find_first_of('l',3)<<endl;
    // cout<<str.find_first_of("le")<<endl;
    cout<<str.find_last_of("le")<<endl;
    return 0;
}