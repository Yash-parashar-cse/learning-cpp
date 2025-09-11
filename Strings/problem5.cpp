#include<iostream>
#include<string>
using namespace std;
int main(){
    string email = "john123@gamil.com";
    int i = (int)email.find('@');
    string username = email.substr(0,i);
    cout<<"The Username is "<<username<<endl;
    return 0;
}