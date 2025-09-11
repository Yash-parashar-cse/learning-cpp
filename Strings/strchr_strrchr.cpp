#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char main[50] = "Programming";
    char a = 'm';
    char b = 'r';
    cout<<strchr(main,a)<<endl;
    cout<<strrchr(main,a)<<endl;

    cout<<strchr(main,b)<<endl;
    cout<<strrchr(main,b)<<endl;
    return 0;
}