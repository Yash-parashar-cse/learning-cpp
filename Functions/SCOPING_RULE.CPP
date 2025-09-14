#include<iostream>
using namespace std;
int x = 10;
int main(){
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    // TO ACCESS THE GLOBAL VARIABLE..
    cout<<::x<<endl;
    return 0;
}