#include<iostream>
using namespace std;
int main(){
    int num,remainder,rev=0;
    cout<<"Enter the number: ";
    cin>>num;
    int copy = num;

    while(num>0){
        remainder = num%10;
        num = num/10;
        rev = rev*10 + remainder;
    }
    cout<<"The reverse of "<<copy<<" is:"<<rev;
    
    return 0;
}