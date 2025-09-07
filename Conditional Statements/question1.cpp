#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=12 || age<=50){
        cout<<"Not eligible";
    }
    else{
        cout<<"Eligible";
    }
    return 0;
}