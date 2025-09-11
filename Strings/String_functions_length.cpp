#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char s[50] = "Hello Yash this side";
    // cout<<"Length is "<<strlen(s)<<endl;

    // char *s;
    // cout<<"Enter a string:";
    // cin>>s;
    // cout<<"Length is "<<strlen(s)<<endl;
    char s[100];
    cout<<"Enter the string:";
    cin.getline(s,100);
    cout<<"Length is "<<strlen(s)<<endl;
    return 0;
}