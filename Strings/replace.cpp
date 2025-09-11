#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Programming";
    string s1 = "language";
    // s.replace(3,6,"KK");
    // s.erase();
    // s.push_back('h');
    // s.pop_back();
    s.swap(s1);

    cout<<s<<endl;
    cout<<s1<<endl;
    return 0;
}