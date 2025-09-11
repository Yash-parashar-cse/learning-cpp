#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello";
    cout<<str.capacity()<<" "<<str.length()<<endl;
    str.append(" World HOw are you and i hope all are fine and doing well!");
    cout<<str.capacity()<<" "<<str.length()<<endl;

    cout<<str<<endl;
    return 0;
}