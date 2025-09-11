#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s = "WELCOME";
    // string::iterator it;
    // for(it = s.begin();it!=s.end();it++){
    //     *it = *it +32;
    // }cout<<s<<endl;

    // CASE WHEN THERE ARE UPPER,LOWER AND A NUMBE RIS IN STRING..
    string s = "WeLcOmE5";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=97 && s[i]<=122){
            s[i] -=32;      }

    }cout<<s<<endl;
    return 0;
}