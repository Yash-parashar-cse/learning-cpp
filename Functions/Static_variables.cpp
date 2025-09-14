#include<iostream>
using namespace std;
void fun(){
    // S is only declared one time as it is a static variable..
    static int s = 10;
    s++;
    cout<<s<<endl;
}
int main(){
    fun();
    fun();
    return 0;
}