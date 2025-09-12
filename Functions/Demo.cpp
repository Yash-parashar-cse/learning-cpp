#include<iostream>
using namespace std;
// void display(){
//     cout<<"Hello";
// }
// int main(){
//     display();
    float add(float x, float y){
        float z = x + y;
        return z;
    }
    int main(){
    float a = 25.56, b = 15.55;
    float c = add(a,b);
    cout<<"The sum is "<<c<<endl;
    return 0;
}