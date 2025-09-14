#include<iostream>
using namespace std;
void display(){
    cout<<"Hello"<<endl;
}
int main(){
    void (*fp)();  //DECLARATION
    fp = display;  //INITIALIZATION
    (*fp)();        //FUNCTION CALL
    return 0;
}