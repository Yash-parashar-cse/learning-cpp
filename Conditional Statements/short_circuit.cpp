#include<iostream>
using namespace std;
int main(){
    int a =7,b=5,i=4;
    bool d = a<b && ++i<5;
    if(a<b && ++i<5){
        cout<<d;
    }
    cout<<i;
    return 0;
}