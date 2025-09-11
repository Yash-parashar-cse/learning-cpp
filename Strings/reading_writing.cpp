#include<iostream>
using namespace std;
int main(){
    // char s[50];
    // cout<<"Enetr your name:";
    // cin>>s;
    // cout<<s;

    // char s[50];
    // cout<<"Enter your name:";
    // cin.get(s,50);
    // // cin.getline(s,50);
    // cout<<Welcome<<s<<endl;

    // GET VERSUS GETLINE METHOD
    // char s[100];
    // char s2[100];

    // cout<<"Enter your name:";
    // cin.getline(s,100);
    // cout<<"Welcome "<<s<<endl;

    // cout<<"Enter your name again:";
    // cin.getline(s2,100);
    // cout<<"Welcome "<<s2<<endl;

    char s[100];
    char s2[100];

    cout<<"Enter your name:";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    cin.ignore();
    cout<<"Enter your name again:";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;
    return 0;
}