#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char s1[50] = "Good ";
    // char s2[50] = "Morning Sweetie!";
    // // strcat(s1,s2);
    // // cout<<s1<<endl;

    // strncat(s1,s2,7);
    // cout<<s1<<endl;

    char s1[50] = "Good Morning";
    char s2[50] = "";
    // strcpy(s2,s1);
    strncpy(s2,s1,4);
    cout<<s2<<endl;
    return 0;
}