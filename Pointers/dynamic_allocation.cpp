#include<iostream>
using namespace std;
int main(){
    // int *p = new int[5];
    // p[0] = 1;
    // p[1] = 12;
    // cout<<p[1]<<endl;
    // delete []p;
    // p = nullptr;
    int *p = new int[20];
    p[2] = 65;
    cout<<p[2]<<endl;
    delete []p;
    // dynamically increasing the size of array during runtime in heap
    p = new int[40];
    cout<<p[2]<<endl;
    return 0;
}