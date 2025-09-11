#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "How are you?";
    cout<<str.find("are")<<endl;
    cout<<str.find("r")<<endl;
    cout<<str.rfind("o")<<endl;
    cout<<str.rfind("k")<<endl;
    return 0;
}