#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int u,v,a;
    float speed;
    cout<<"Enter initial velocity:";
    cin>>u;
    cout<<"Enter final velocity:";
    cin>>v;
    cout<<"Enter acceleration:";
    cin>>a;

    speed = (v*v - u*u) / (2*a);
    cout<<"The speed is: "<<speed;
    return 0;
}