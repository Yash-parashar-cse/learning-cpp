#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Hello";
    string s1 = "";

    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(30);
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    // s.clear();
    cout<<s.empty()<<endl;
    cout<<s1.empty()<<endl;
    


    cout<<s<<endl;
    return 0;
}