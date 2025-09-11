#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str= "today";
    // string::iterator it;
    // for(it = str.begin();it!=str.end();it++){
    //     // cout<<*it;
    //     *it = *it - 32; //to convert to upper case
    //     cout<<*it;
    // }
    // cout<<endl;
    string str= "today";
    string::reverse_iterator it;
    for(it = str.rbegin();it!=str.rend();it++){
        // cout<<*it;
        // *it = *it - 32; //to convert to upper case
        cout<<*it;
    }
    cout<<endl;
    return 0;
}