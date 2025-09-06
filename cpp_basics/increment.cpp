#include<iostream>
using namespace std;
int main(){
    int x=5,y=10,z;
    z = x++ * y;
    cout<<z<<" "<<x<<" ";
    z = ++x * y;
    cout<<z<<" "<<x;

    return 0;
}