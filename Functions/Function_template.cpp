#include<iostream>
using namespace std;
template<class T>
T max(T x,T y){
    if(x>y)
        return x;
    else
        return y;
}
int main(){
    int a = max(10,5);
    float b = max(10.52f,12.25f);
    cout<<a<<" "<<b<<endl;
    return 0;
}