#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to be reversed: ";
    cin>>num;
    int remainder;
    while(num>0){
        remainder = num%10;
        num= num / 10;
        cout<<remainder;
    }
    return 0;
}